'''Susi Lehtola, 2023-07-10

Routines for generating test cases for the quadrature routines in
IntegratorXX using SymPy to evaluate reference values in arbitrary
precision.
'''

from sympy.integrals.quadrature import gauss_legendre, gauss_lobatto
from sympy.core import S
import numpy
import os

# Generate tests with 20 digit precision
ndigits = 20
# Maximum order
nmax = 101

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

generators = {'GaussLegendre' : gauss_legendre, 'GaussLobatto' : gauss_lobatto}

for rule in generators:
    fname = f'{rule.lower()}.cxx'
    if os.path.exists(fname):
        print(f'{fname} already exists, skipping')
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
    for order in range(2,nmax):
        print(f'Generating test for {rule} with {order} points')
        x, w = generators[rule](order, ndigits)
        write_test(out, list(zip(x,w)), rule)
    out.close()
