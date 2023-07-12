'''Susi Lehtola, 2023-07-10

Routines for generating test cases for the quadrature routines in
IntegratorXX using SymPy to evaluate reference values in arbitrary
precision.
'''

from sympy.integrals.quadrature import gauss_legendre, gauss_lobatto, gauss_chebyshev_t, gauss_chebyshev_u
from sympy.core import S
from sympy import sqrt
import numpy
import os

# Generate tests with 20 digit precision
ndigits = 20

def add_to_tests(tests, increment, n_points):
    '''Helper function to generate new tests for the checks'''
    assert increment % 2 == 1
    begin = tests[-1]+increment if len(tests)>0 else 2
    end = begin + n_points*increment;
    tests += list(range(begin, end, increment))

# Extensive test cases for implicit quadrature rules that require root
# finding etc
extensive_tests = []
for spacing in range(1,10,2):
    # Do 40 consecutive tests, then 40 tests with increment 3,
    # another 40 with increment 5, then 40 with increment 7 and
    # finally 40 with increment 9, totalling checks for 200 rules
    add_to_tests(extensive_tests, spacing, 40)

print(f'Extensive tests considering the orders {extensive_tests}')
print(f'This is a total of {len(extensive_tests)} rules with a total of {sum(extensive_tests)} data points\n')
    
# More limited testing suffices for rules that have algebraic
# expressions for the nodes and weights
limited_tests = []
for spacing in range(1,10,2):
    add_to_tests(limited_tests, spacing, 5)

print(f'Limited tests considering the orders {limited_tests}')
print(f'This is a total of {len(limited_tests)} rules with a total of {sum(limited_tests)} data points\n')

def write_test(out, points, integrator):
    '''Writes out source code for the test case'''

    out.write(f'TEST_CASE("{len(points)} point {integrator}", "[1d-quad]") {{\n')

    # Write out reference values as arrays
    references = ['ref_pts', 'ref_wgt']
    for iref, ref in enumerate(references):
        out.write(f'std::array<double,{len(points)}> {ref} = {{\n    ')
        for ipoint, point in enumerate(points):
            out.write(f'{point[iref]}')
            if ipoint != len(points)-1:
                out.write(', ')
                if (ipoint+1) % 3 == 0:
                    out.write('\n    ')
        out.write(f'\n}};\n');

    # Now compute the rule
    out.write(f'IntegratorXX::{integrator}<double,double> quad({len(x)});\n')
    out.write(f'const auto & pts = quad.points();\n')
    out.write(f'const auto & wgt = quad.weights();\n')
    out.write(f'''for(auto i = 0ul; i < {len(points)}; i++) {{
    REQUIRE_THAT(pts[i], Catch::Matchers::WithinAbs(ref_pts[i],x_tolerance));
    REQUIRE_THAT(wgt[i], Catch::Matchers::WithinAbs(ref_wgt[i],w_tolerance));
    }}
    ''')
    out.write('}\n\n')

def gausscheby1(order, n_digits):
    '''Returns a Gauss-Chebyshev rule of the first kind defined similarly to IntegratorXX'''

    x, w = gauss_chebyshev_t(order, n_digits)
    for ix, xval in enumerate(x):
        w[ix] *= sqrt(S.One - xval*xval)
    # Ensure nodes are in increasing order
    if x[-1] < x[0]:
        x = x[::-1]
        w = w[::-1]
    return x, w

def gausscheby2(order, n_digits):
    '''Returns a Gauss-Chebyshev rule of the second kind defined similarly to IntegratorXX'''

    x, w = gauss_chebyshev_u(order, n_digits)
    for ix, xval in enumerate(x):
        w[ix] /= sqrt(S.One - xval*xval)
    # Ensure nodes are in increasing order
    if x[-1] < x[0]:
        x = x[::-1]
        w = w[::-1]
    return x, w

generators = {'GaussLegendre' : (gauss_legendre, extensive_tests), 'GaussLobatto' : (gauss_lobatto, extensive_tests), 'GaussChebyshev1': (gausscheby1, limited_tests), 'GaussChebyshev2': (gausscheby2, limited_tests)}

for rule in generators:
    fname = f'{rule.lower()}.cxx'
    if os.path.exists(fname):
        print(f'{fname} already exists, skipping\n')
        continue

    out=open(fname,'w')
    out.write(f'''
/* THIS FILE IS AUTOGENERATED BY generate_quadrature_tests.py.
   DO NOT EDIT THIS FILE, EDIT THE AUTOGENERATOR INSTEAD.
*/

// clang-format off
#include "catch2/catch_all.hpp"
#include <integratorxx/quadratures/{rule.lower()}.hpp>
#include <numeric>
#include <vector>
// clang-format on

const double x_tolerance = 10*std::numeric_limits<double>::epsilon();
const double w_tolerance = 10*std::numeric_limits<double>::epsilon();

''')

    generate, test_orders = generators[rule]
    for order in test_orders:
        print(f'Generating test for {rule} with {order} points')
        x, w = generate(order, ndigits)
        write_test(out, list(zip(x,w)), rule)
    out.close()
    print('')
