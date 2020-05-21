#pragma once

namespace IntegratorXX::redeux {
namespace LebedevLaikovGrids {

/**
 *  \brief Lebedev-Laikov Quadrature specification for Order = 38
 * 
 */
template <typename T>
struct lebedev_laikov_38 {

  static constexpr std::array<cartesian_pt_t<T>,38> points = {
      1.000000000000000e+00,      0.000000000000000e+00,      0.000000000000000e+00,
     -1.000000000000000e+00,      0.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,      1.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,     -1.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,      0.000000000000000e+00,      1.000000000000000e+00,
      0.000000000000000e+00,      0.000000000000000e+00,     -1.000000000000000e+00,
      5.773502691896257e-01,      5.773502691896257e-01,      5.773502691896257e-01,
     -5.773502691896257e-01,      5.773502691896257e-01,      5.773502691896257e-01,
      5.773502691896257e-01,     -5.773502691896257e-01,      5.773502691896257e-01,
     -5.773502691896257e-01,     -5.773502691896257e-01,      5.773502691896257e-01,
      5.773502691896257e-01,      5.773502691896257e-01,     -5.773502691896257e-01,
     -5.773502691896257e-01,      5.773502691896257e-01,     -5.773502691896257e-01,
      5.773502691896257e-01,     -5.773502691896257e-01,     -5.773502691896257e-01,
     -5.773502691896257e-01,     -5.773502691896257e-01,     -5.773502691896257e-01,
      4.597008433809831e-01,      8.880738339771153e-01,      0.000000000000000e+00,
     -4.597008433809831e-01,      8.880738339771153e-01,      0.000000000000000e+00,
      4.597008433809831e-01,     -8.880738339771153e-01,      0.000000000000000e+00,
     -4.597008433809831e-01,     -8.880738339771153e-01,      0.000000000000000e+00,
      8.880738339771153e-01,      4.597008433809831e-01,      0.000000000000000e+00,
     -8.880738339771153e-01,      4.597008433809831e-01,      0.000000000000000e+00,
      8.880738339771153e-01,     -4.597008433809831e-01,      0.000000000000000e+00,
     -8.880738339771153e-01,     -4.597008433809831e-01,      0.000000000000000e+00,
      4.597008433809831e-01,      0.000000000000000e+00,      8.880738339771153e-01,
     -4.597008433809831e-01,      0.000000000000000e+00,      8.880738339771153e-01,
      4.597008433809831e-01,      0.000000000000000e+00,     -8.880738339771153e-01,
     -4.597008433809831e-01,      0.000000000000000e+00,     -8.880738339771153e-01,
      8.880738339771153e-01,      0.000000000000000e+00,      4.597008433809831e-01,
     -8.880738339771153e-01,      0.000000000000000e+00,      4.597008433809831e-01,
      8.880738339771153e-01,      0.000000000000000e+00,     -4.597008433809831e-01,
     -8.880738339771153e-01,      0.000000000000000e+00,     -4.597008433809831e-01,
      0.000000000000000e+00,      4.597008433809831e-01,      8.880738339771153e-01,
      0.000000000000000e+00,     -4.597008433809831e-01,      8.880738339771153e-01,
      0.000000000000000e+00,      4.597008433809831e-01,     -8.880738339771153e-01,
      0.000000000000000e+00,     -4.597008433809831e-01,     -8.880738339771153e-01,
      0.000000000000000e+00,      8.880738339771153e-01,      4.597008433809831e-01,
      0.000000000000000e+00,     -8.880738339771153e-01,      4.597008433809831e-01,
      0.000000000000000e+00,      8.880738339771153e-01,     -4.597008433809831e-01,
      0.000000000000000e+00,     -8.880738339771153e-01,     -4.597008433809831e-01
  };


  static constexpr std::array<T,38> weights = {
        9.523809523809525e-03,
        9.523809523809525e-03,
        9.523809523809525e-03,
        9.523809523809525e-03,
        9.523809523809525e-03,
        9.523809523809525e-03,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02,
        2.857142857142857e-02
  };
};
};
}
