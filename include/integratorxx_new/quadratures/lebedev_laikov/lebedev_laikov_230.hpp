#pragma once

namespace IntegratorXX::redeux {
namespace LebedevLaikovGrids {

/**
 *  \brief Lebedev-Laikov Quadrature specification for Order = 230
 * 
 */
template <typename T>
struct lebedev_laikov_230 {

  static constexpr std::array<cartesian_pt_t<T>,230> points = {
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
      4.492044687397611e-01,      4.492044687397611e-01,      7.722892531483641e-01,
     -4.492044687397611e-01,      4.492044687397611e-01,      7.722892531483641e-01,
      4.492044687397611e-01,     -4.492044687397611e-01,      7.722892531483641e-01,
     -4.492044687397611e-01,     -4.492044687397611e-01,      7.722892531483641e-01,
      4.492044687397611e-01,      4.492044687397611e-01,     -7.722892531483641e-01,
     -4.492044687397611e-01,      4.492044687397611e-01,     -7.722892531483641e-01,
      4.492044687397611e-01,     -4.492044687397611e-01,     -7.722892531483641e-01,
     -4.492044687397611e-01,     -4.492044687397611e-01,     -7.722892531483641e-01,
      4.492044687397611e-01,      7.722892531483641e-01,      4.492044687397611e-01,
     -4.492044687397611e-01,      7.722892531483641e-01,      4.492044687397611e-01,
      4.492044687397611e-01,     -7.722892531483641e-01,      4.492044687397611e-01,
     -4.492044687397611e-01,     -7.722892531483641e-01,      4.492044687397611e-01,
      4.492044687397611e-01,      7.722892531483641e-01,     -4.492044687397611e-01,
     -4.492044687397611e-01,      7.722892531483641e-01,     -4.492044687397611e-01,
      4.492044687397611e-01,     -7.722892531483641e-01,     -4.492044687397611e-01,
     -4.492044687397611e-01,     -7.722892531483641e-01,     -4.492044687397611e-01,
      7.722892531483641e-01,      4.492044687397611e-01,      4.492044687397611e-01,
     -7.722892531483641e-01,      4.492044687397611e-01,      4.492044687397611e-01,
      7.722892531483641e-01,     -4.492044687397611e-01,      4.492044687397611e-01,
     -7.722892531483641e-01,     -4.492044687397611e-01,      4.492044687397611e-01,
      7.722892531483641e-01,      4.492044687397611e-01,     -4.492044687397611e-01,
     -7.722892531483641e-01,      4.492044687397611e-01,     -4.492044687397611e-01,
      7.722892531483641e-01,     -4.492044687397611e-01,     -4.492044687397611e-01,
     -7.722892531483641e-01,     -4.492044687397611e-01,     -4.492044687397611e-01,
      2.520419490210201e-01,      2.520419490210201e-01,      9.343177788458117e-01,
     -2.520419490210201e-01,      2.520419490210201e-01,      9.343177788458117e-01,
      2.520419490210201e-01,     -2.520419490210201e-01,      9.343177788458117e-01,
     -2.520419490210201e-01,     -2.520419490210201e-01,      9.343177788458117e-01,
      2.520419490210201e-01,      2.520419490210201e-01,     -9.343177788458117e-01,
     -2.520419490210201e-01,      2.520419490210201e-01,     -9.343177788458117e-01,
      2.520419490210201e-01,     -2.520419490210201e-01,     -9.343177788458117e-01,
     -2.520419490210201e-01,     -2.520419490210201e-01,     -9.343177788458117e-01,
      2.520419490210201e-01,      9.343177788458117e-01,      2.520419490210201e-01,
     -2.520419490210201e-01,      9.343177788458117e-01,      2.520419490210201e-01,
      2.520419490210201e-01,     -9.343177788458117e-01,      2.520419490210201e-01,
     -2.520419490210201e-01,     -9.343177788458117e-01,      2.520419490210201e-01,
      2.520419490210201e-01,      9.343177788458117e-01,     -2.520419490210201e-01,
     -2.520419490210201e-01,      9.343177788458117e-01,     -2.520419490210201e-01,
      2.520419490210201e-01,     -9.343177788458117e-01,     -2.520419490210201e-01,
     -2.520419490210201e-01,     -9.343177788458117e-01,     -2.520419490210201e-01,
      9.343177788458117e-01,      2.520419490210201e-01,      2.520419490210201e-01,
     -9.343177788458117e-01,      2.520419490210201e-01,      2.520419490210201e-01,
      9.343177788458117e-01,     -2.520419490210201e-01,      2.520419490210201e-01,
     -9.343177788458117e-01,     -2.520419490210201e-01,      2.520419490210201e-01,
      9.343177788458117e-01,      2.520419490210201e-01,     -2.520419490210201e-01,
     -9.343177788458117e-01,      2.520419490210201e-01,     -2.520419490210201e-01,
      9.343177788458117e-01,     -2.520419490210201e-01,     -2.520419490210201e-01,
     -9.343177788458117e-01,     -2.520419490210201e-01,     -2.520419490210201e-01,
      6.981906658447242e-01,      6.981906658447242e-01,      1.583022054634783e-01,
     -6.981906658447242e-01,      6.981906658447242e-01,      1.583022054634783e-01,
      6.981906658447242e-01,     -6.981906658447242e-01,      1.583022054634783e-01,
     -6.981906658447242e-01,     -6.981906658447242e-01,      1.583022054634783e-01,
      6.981906658447242e-01,      6.981906658447242e-01,     -1.583022054634783e-01,
     -6.981906658447242e-01,      6.981906658447242e-01,     -1.583022054634783e-01,
      6.981906658447242e-01,     -6.981906658447242e-01,     -1.583022054634783e-01,
     -6.981906658447242e-01,     -6.981906658447242e-01,     -1.583022054634783e-01,
      6.981906658447242e-01,      1.583022054634783e-01,      6.981906658447242e-01,
     -6.981906658447242e-01,      1.583022054634783e-01,      6.981906658447242e-01,
      6.981906658447242e-01,     -1.583022054634783e-01,      6.981906658447242e-01,
     -6.981906658447242e-01,     -1.583022054634783e-01,      6.981906658447242e-01,
      6.981906658447242e-01,      1.583022054634783e-01,     -6.981906658447242e-01,
     -6.981906658447242e-01,      1.583022054634783e-01,     -6.981906658447242e-01,
      6.981906658447242e-01,     -1.583022054634783e-01,     -6.981906658447242e-01,
     -6.981906658447242e-01,     -1.583022054634783e-01,     -6.981906658447242e-01,
      1.583022054634783e-01,      6.981906658447242e-01,      6.981906658447242e-01,
     -1.583022054634783e-01,      6.981906658447242e-01,      6.981906658447242e-01,
      1.583022054634783e-01,     -6.981906658447242e-01,      6.981906658447242e-01,
     -1.583022054634783e-01,     -6.981906658447242e-01,      6.981906658447242e-01,
      1.583022054634783e-01,      6.981906658447242e-01,     -6.981906658447242e-01,
     -1.583022054634783e-01,      6.981906658447242e-01,     -6.981906658447242e-01,
      1.583022054634783e-01,     -6.981906658447242e-01,     -6.981906658447242e-01,
     -1.583022054634783e-01,     -6.981906658447242e-01,     -6.981906658447242e-01,
      6.587405243460960e-01,      6.587405243460960e-01,      3.634856849567271e-01,
     -6.587405243460960e-01,      6.587405243460960e-01,      3.634856849567271e-01,
      6.587405243460960e-01,     -6.587405243460960e-01,      3.634856849567271e-01,
     -6.587405243460960e-01,     -6.587405243460960e-01,      3.634856849567271e-01,
      6.587405243460960e-01,      6.587405243460960e-01,     -3.634856849567271e-01,
     -6.587405243460960e-01,      6.587405243460960e-01,     -3.634856849567271e-01,
      6.587405243460960e-01,     -6.587405243460960e-01,     -3.634856849567271e-01,
     -6.587405243460960e-01,     -6.587405243460960e-01,     -3.634856849567271e-01,
      6.587405243460960e-01,      3.634856849567271e-01,      6.587405243460960e-01,
     -6.587405243460960e-01,      3.634856849567271e-01,      6.587405243460960e-01,
      6.587405243460960e-01,     -3.634856849567271e-01,      6.587405243460960e-01,
     -6.587405243460960e-01,     -3.634856849567271e-01,      6.587405243460960e-01,
      6.587405243460960e-01,      3.634856849567271e-01,     -6.587405243460960e-01,
     -6.587405243460960e-01,      3.634856849567271e-01,     -6.587405243460960e-01,
      6.587405243460960e-01,     -3.634856849567271e-01,     -6.587405243460960e-01,
     -6.587405243460960e-01,     -3.634856849567271e-01,     -6.587405243460960e-01,
      3.634856849567271e-01,      6.587405243460960e-01,      6.587405243460960e-01,
     -3.634856849567271e-01,      6.587405243460960e-01,      6.587405243460960e-01,
      3.634856849567271e-01,     -6.587405243460960e-01,      6.587405243460960e-01,
     -3.634856849567271e-01,     -6.587405243460960e-01,      6.587405243460960e-01,
      3.634856849567271e-01,      6.587405243460960e-01,     -6.587405243460960e-01,
     -3.634856849567271e-01,      6.587405243460960e-01,     -6.587405243460960e-01,
      3.634856849567271e-01,     -6.587405243460960e-01,     -6.587405243460960e-01,
     -3.634856849567271e-01,     -6.587405243460960e-01,     -6.587405243460960e-01,
      4.038544050097660e-02,      4.038544050097660e-02,      9.983676839677275e-01,
     -4.038544050097660e-02,      4.038544050097660e-02,      9.983676839677275e-01,
      4.038544050097660e-02,     -4.038544050097660e-02,      9.983676839677275e-01,
     -4.038544050097660e-02,     -4.038544050097660e-02,      9.983676839677275e-01,
      4.038544050097660e-02,      4.038544050097660e-02,     -9.983676839677275e-01,
     -4.038544050097660e-02,      4.038544050097660e-02,     -9.983676839677275e-01,
      4.038544050097660e-02,     -4.038544050097660e-02,     -9.983676839677275e-01,
     -4.038544050097660e-02,     -4.038544050097660e-02,     -9.983676839677275e-01,
      4.038544050097660e-02,      9.983676839677275e-01,      4.038544050097660e-02,
     -4.038544050097660e-02,      9.983676839677275e-01,      4.038544050097660e-02,
      4.038544050097660e-02,     -9.983676839677275e-01,      4.038544050097660e-02,
     -4.038544050097660e-02,     -9.983676839677275e-01,      4.038544050097660e-02,
      4.038544050097660e-02,      9.983676839677275e-01,     -4.038544050097660e-02,
     -4.038544050097660e-02,      9.983676839677275e-01,     -4.038544050097660e-02,
      4.038544050097660e-02,     -9.983676839677275e-01,     -4.038544050097660e-02,
     -4.038544050097660e-02,     -9.983676839677275e-01,     -4.038544050097660e-02,
      9.983676839677275e-01,      4.038544050097660e-02,      4.038544050097660e-02,
     -9.983676839677275e-01,      4.038544050097660e-02,      4.038544050097660e-02,
      9.983676839677275e-01,     -4.038544050097660e-02,      4.038544050097660e-02,
     -9.983676839677275e-01,     -4.038544050097660e-02,      4.038544050097660e-02,
      9.983676839677275e-01,      4.038544050097660e-02,     -4.038544050097660e-02,
     -9.983676839677275e-01,      4.038544050097660e-02,     -4.038544050097660e-02,
      9.983676839677275e-01,     -4.038544050097660e-02,     -4.038544050097660e-02,
     -9.983676839677275e-01,     -4.038544050097660e-02,     -4.038544050097660e-02,
      5.823842309715584e-01,      8.129136531733653e-01,      0.000000000000000e+00,
     -5.823842309715584e-01,      8.129136531733653e-01,      0.000000000000000e+00,
      5.823842309715584e-01,     -8.129136531733653e-01,      0.000000000000000e+00,
     -5.823842309715584e-01,     -8.129136531733653e-01,      0.000000000000000e+00,
      8.129136531733653e-01,      5.823842309715584e-01,      0.000000000000000e+00,
     -8.129136531733653e-01,      5.823842309715584e-01,      0.000000000000000e+00,
      8.129136531733653e-01,     -5.823842309715584e-01,      0.000000000000000e+00,
     -8.129136531733653e-01,     -5.823842309715584e-01,      0.000000000000000e+00,
      5.823842309715584e-01,      0.000000000000000e+00,      8.129136531733653e-01,
     -5.823842309715584e-01,      0.000000000000000e+00,      8.129136531733653e-01,
      5.823842309715584e-01,      0.000000000000000e+00,     -8.129136531733653e-01,
     -5.823842309715584e-01,      0.000000000000000e+00,     -8.129136531733653e-01,
      8.129136531733653e-01,      0.000000000000000e+00,      5.823842309715584e-01,
     -8.129136531733653e-01,      0.000000000000000e+00,      5.823842309715584e-01,
      8.129136531733653e-01,      0.000000000000000e+00,     -5.823842309715584e-01,
     -8.129136531733653e-01,      0.000000000000000e+00,     -5.823842309715584e-01,
      0.000000000000000e+00,      5.823842309715584e-01,      8.129136531733653e-01,
      0.000000000000000e+00,     -5.823842309715584e-01,      8.129136531733653e-01,
      0.000000000000000e+00,      5.823842309715584e-01,     -8.129136531733653e-01,
      0.000000000000000e+00,     -5.823842309715584e-01,     -8.129136531733653e-01,
      0.000000000000000e+00,      8.129136531733653e-01,      5.823842309715584e-01,
      0.000000000000000e+00,     -8.129136531733653e-01,      5.823842309715584e-01,
      0.000000000000000e+00,      8.129136531733653e-01,     -5.823842309715584e-01,
      0.000000000000000e+00,     -8.129136531733653e-01,     -5.823842309715584e-01,
      3.545877390518688e-01,      9.350227458805930e-01,      0.000000000000000e+00,
     -3.545877390518688e-01,      9.350227458805930e-01,      0.000000000000000e+00,
      3.545877390518688e-01,     -9.350227458805930e-01,      0.000000000000000e+00,
     -3.545877390518688e-01,     -9.350227458805930e-01,      0.000000000000000e+00,
      9.350227458805930e-01,      3.545877390518688e-01,      0.000000000000000e+00,
     -9.350227458805930e-01,      3.545877390518688e-01,      0.000000000000000e+00,
      9.350227458805930e-01,     -3.545877390518688e-01,      0.000000000000000e+00,
     -9.350227458805930e-01,     -3.545877390518688e-01,      0.000000000000000e+00,
      3.545877390518688e-01,      0.000000000000000e+00,      9.350227458805930e-01,
     -3.545877390518688e-01,      0.000000000000000e+00,      9.350227458805930e-01,
      3.545877390518688e-01,      0.000000000000000e+00,     -9.350227458805930e-01,
     -3.545877390518688e-01,      0.000000000000000e+00,     -9.350227458805930e-01,
      9.350227458805930e-01,      0.000000000000000e+00,      3.545877390518688e-01,
     -9.350227458805930e-01,      0.000000000000000e+00,      3.545877390518688e-01,
      9.350227458805930e-01,      0.000000000000000e+00,     -3.545877390518688e-01,
     -9.350227458805930e-01,      0.000000000000000e+00,     -3.545877390518688e-01,
      0.000000000000000e+00,      3.545877390518688e-01,      9.350227458805930e-01,
      0.000000000000000e+00,     -3.545877390518688e-01,      9.350227458805930e-01,
      0.000000000000000e+00,      3.545877390518688e-01,     -9.350227458805930e-01,
      0.000000000000000e+00,     -3.545877390518688e-01,     -9.350227458805930e-01,
      0.000000000000000e+00,      9.350227458805930e-01,      3.545877390518688e-01,
      0.000000000000000e+00,     -9.350227458805930e-01,      3.545877390518688e-01,
      0.000000000000000e+00,      9.350227458805930e-01,     -3.545877390518688e-01,
      0.000000000000000e+00,     -9.350227458805930e-01,     -3.545877390518688e-01,
      2.272181808998187e-01,      4.864661535886647e-01,      8.436365210688943e-01,
     -2.272181808998187e-01,      4.864661535886647e-01,      8.436365210688943e-01,
      2.272181808998187e-01,     -4.864661535886647e-01,      8.436365210688943e-01,
     -2.272181808998187e-01,     -4.864661535886647e-01,      8.436365210688943e-01,
      2.272181808998187e-01,      4.864661535886647e-01,     -8.436365210688943e-01,
     -2.272181808998187e-01,      4.864661535886647e-01,     -8.436365210688943e-01,
      2.272181808998187e-01,     -4.864661535886647e-01,     -8.436365210688943e-01,
     -2.272181808998187e-01,     -4.864661535886647e-01,     -8.436365210688943e-01,
      2.272181808998187e-01,      8.436365210688943e-01,      4.864661535886647e-01,
     -2.272181808998187e-01,      8.436365210688943e-01,      4.864661535886647e-01,
      2.272181808998187e-01,     -8.436365210688943e-01,      4.864661535886647e-01,
     -2.272181808998187e-01,     -8.436365210688943e-01,      4.864661535886647e-01,
      2.272181808998187e-01,      8.436365210688943e-01,     -4.864661535886647e-01,
     -2.272181808998187e-01,      8.436365210688943e-01,     -4.864661535886647e-01,
      2.272181808998187e-01,     -8.436365210688943e-01,     -4.864661535886647e-01,
     -2.272181808998187e-01,     -8.436365210688943e-01,     -4.864661535886647e-01,
      4.864661535886647e-01,      2.272181808998187e-01,      8.436365210688943e-01,
     -4.864661535886647e-01,      2.272181808998187e-01,      8.436365210688943e-01,
      4.864661535886647e-01,     -2.272181808998187e-01,      8.436365210688943e-01,
     -4.864661535886647e-01,     -2.272181808998187e-01,      8.436365210688943e-01,
      4.864661535886647e-01,      2.272181808998187e-01,     -8.436365210688943e-01,
     -4.864661535886647e-01,      2.272181808998187e-01,     -8.436365210688943e-01,
      4.864661535886647e-01,     -2.272181808998187e-01,     -8.436365210688943e-01,
     -4.864661535886647e-01,     -2.272181808998187e-01,     -8.436365210688943e-01,
      4.864661535886647e-01,      8.436365210688943e-01,      2.272181808998187e-01,
     -4.864661535886647e-01,      8.436365210688943e-01,      2.272181808998187e-01,
      4.864661535886647e-01,     -8.436365210688943e-01,      2.272181808998187e-01,
     -4.864661535886647e-01,     -8.436365210688943e-01,      2.272181808998187e-01,
      4.864661535886647e-01,      8.436365210688943e-01,     -2.272181808998187e-01,
     -4.864661535886647e-01,      8.436365210688943e-01,     -2.272181808998187e-01,
      4.864661535886647e-01,     -8.436365210688943e-01,     -2.272181808998187e-01,
     -4.864661535886647e-01,     -8.436365210688943e-01,     -2.272181808998187e-01,
      8.436365210688943e-01,      2.272181808998187e-01,      4.864661535886647e-01,
     -8.436365210688943e-01,      2.272181808998187e-01,      4.864661535886647e-01,
      8.436365210688943e-01,     -2.272181808998187e-01,      4.864661535886647e-01,
     -8.436365210688943e-01,     -2.272181808998187e-01,      4.864661535886647e-01,
      8.436365210688943e-01,      2.272181808998187e-01,     -4.864661535886647e-01,
     -8.436365210688943e-01,      2.272181808998187e-01,     -4.864661535886647e-01,
      8.436365210688943e-01,     -2.272181808998187e-01,     -4.864661535886647e-01,
     -8.436365210688943e-01,     -2.272181808998187e-01,     -4.864661535886647e-01,
      8.436365210688943e-01,      4.864661535886647e-01,      2.272181808998187e-01,
     -8.436365210688943e-01,      4.864661535886647e-01,      2.272181808998187e-01,
      8.436365210688943e-01,     -4.864661535886647e-01,      2.272181808998187e-01,
     -8.436365210688943e-01,     -4.864661535886647e-01,      2.272181808998187e-01,
      8.436365210688943e-01,      4.864661535886647e-01,     -2.272181808998187e-01,
     -8.436365210688943e-01,      4.864661535886647e-01,     -2.272181808998187e-01,
      8.436365210688943e-01,     -4.864661535886647e-01,     -2.272181808998187e-01,
     -8.436365210688943e-01,     -4.864661535886647e-01,     -2.272181808998187e-01
  };


  static constexpr std::array<T,230> weights = {
       -5.522639919727325e-02,
       -5.522639919727325e-02,
       -5.522639919727325e-02,
       -5.522639919727325e-02,
       -5.522639919727325e-02,
       -5.522639919727325e-02,
        4.450274607445226e-03,
        4.450274607445226e-03,
        4.450274607445226e-03,
        4.450274607445226e-03,
        4.450274607445226e-03,
        4.450274607445226e-03,
        4.450274607445226e-03,
        4.450274607445226e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        4.496841067921404e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        5.049153450478750e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        3.976408018051883e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        4.401400650381014e-03,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        1.724544350544401e-02,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        4.231083095357343e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        5.198069864064399e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03,
        4.695720972568883e-03
  };
};
};
}
