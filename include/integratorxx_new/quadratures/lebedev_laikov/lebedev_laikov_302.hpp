#pragma once

namespace IntegratorXX::redeux {
namespace LebedevLaikovGrids {

/**
 *  \brief Lebedev-Laikov Quadrature specification for Order = 302
 * 
 */
template <typename T>
struct lebedev_laikov_302 {

  static constexpr std::array<cartesian_pt_t<T>,302> points = {
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
      3.515640345570105e-01,      3.515640345570105e-01,      8.676436245440834e-01,
     -3.515640345570105e-01,      3.515640345570105e-01,      8.676436245440834e-01,
      3.515640345570105e-01,     -3.515640345570105e-01,      8.676436245440834e-01,
     -3.515640345570105e-01,     -3.515640345570105e-01,      8.676436245440834e-01,
      3.515640345570105e-01,      3.515640345570105e-01,     -8.676436245440834e-01,
     -3.515640345570105e-01,      3.515640345570105e-01,     -8.676436245440834e-01,
      3.515640345570105e-01,     -3.515640345570105e-01,     -8.676436245440834e-01,
     -3.515640345570105e-01,     -3.515640345570105e-01,     -8.676436245440834e-01,
      3.515640345570105e-01,      8.676436245440834e-01,      3.515640345570105e-01,
     -3.515640345570105e-01,      8.676436245440834e-01,      3.515640345570105e-01,
      3.515640345570105e-01,     -8.676436245440834e-01,      3.515640345570105e-01,
     -3.515640345570105e-01,     -8.676436245440834e-01,      3.515640345570105e-01,
      3.515640345570105e-01,      8.676436245440834e-01,     -3.515640345570105e-01,
     -3.515640345570105e-01,      8.676436245440834e-01,     -3.515640345570105e-01,
      3.515640345570105e-01,     -8.676436245440834e-01,     -3.515640345570105e-01,
     -3.515640345570105e-01,     -8.676436245440834e-01,     -3.515640345570105e-01,
      8.676436245440834e-01,      3.515640345570105e-01,      3.515640345570105e-01,
     -8.676436245440834e-01,      3.515640345570105e-01,      3.515640345570105e-01,
      8.676436245440834e-01,     -3.515640345570105e-01,      3.515640345570105e-01,
     -8.676436245440834e-01,     -3.515640345570105e-01,      3.515640345570105e-01,
      8.676436245440834e-01,      3.515640345570105e-01,     -3.515640345570105e-01,
     -8.676436245440834e-01,      3.515640345570105e-01,     -3.515640345570105e-01,
      8.676436245440834e-01,     -3.515640345570105e-01,     -3.515640345570105e-01,
     -8.676436245440834e-01,     -3.515640345570105e-01,     -3.515640345570105e-01,
      6.566329410219612e-01,      6.566329410219612e-01,      3.710341783848209e-01,
     -6.566329410219612e-01,      6.566329410219612e-01,      3.710341783848209e-01,
      6.566329410219612e-01,     -6.566329410219612e-01,      3.710341783848209e-01,
     -6.566329410219612e-01,     -6.566329410219612e-01,      3.710341783848209e-01,
      6.566329410219612e-01,      6.566329410219612e-01,     -3.710341783848209e-01,
     -6.566329410219612e-01,      6.566329410219612e-01,     -3.710341783848209e-01,
      6.566329410219612e-01,     -6.566329410219612e-01,     -3.710341783848209e-01,
     -6.566329410219612e-01,     -6.566329410219612e-01,     -3.710341783848209e-01,
      6.566329410219612e-01,      3.710341783848209e-01,      6.566329410219612e-01,
     -6.566329410219612e-01,      3.710341783848209e-01,      6.566329410219612e-01,
      6.566329410219612e-01,     -3.710341783848209e-01,      6.566329410219612e-01,
     -6.566329410219612e-01,     -3.710341783848209e-01,      6.566329410219612e-01,
      6.566329410219612e-01,      3.710341783848209e-01,     -6.566329410219612e-01,
     -6.566329410219612e-01,      3.710341783848209e-01,     -6.566329410219612e-01,
      6.566329410219612e-01,     -3.710341783848209e-01,     -6.566329410219612e-01,
     -6.566329410219612e-01,     -3.710341783848209e-01,     -6.566329410219612e-01,
      3.710341783848209e-01,      6.566329410219612e-01,      6.566329410219612e-01,
     -3.710341783848209e-01,      6.566329410219612e-01,      6.566329410219612e-01,
      3.710341783848209e-01,     -6.566329410219612e-01,      6.566329410219612e-01,
     -3.710341783848209e-01,     -6.566329410219612e-01,      6.566329410219612e-01,
      3.710341783848209e-01,      6.566329410219612e-01,     -6.566329410219612e-01,
     -3.710341783848209e-01,      6.566329410219612e-01,     -6.566329410219612e-01,
      3.710341783848209e-01,     -6.566329410219612e-01,     -6.566329410219612e-01,
     -3.710341783848209e-01,     -6.566329410219612e-01,     -6.566329410219612e-01,
      4.729054132581005e-01,      4.729054132581005e-01,      7.434520429875557e-01,
     -4.729054132581005e-01,      4.729054132581005e-01,      7.434520429875557e-01,
      4.729054132581005e-01,     -4.729054132581005e-01,      7.434520429875557e-01,
     -4.729054132581005e-01,     -4.729054132581005e-01,      7.434520429875557e-01,
      4.729054132581005e-01,      4.729054132581005e-01,     -7.434520429875557e-01,
     -4.729054132581005e-01,      4.729054132581005e-01,     -7.434520429875557e-01,
      4.729054132581005e-01,     -4.729054132581005e-01,     -7.434520429875557e-01,
     -4.729054132581005e-01,     -4.729054132581005e-01,     -7.434520429875557e-01,
      4.729054132581005e-01,      7.434520429875557e-01,      4.729054132581005e-01,
     -4.729054132581005e-01,      7.434520429875557e-01,      4.729054132581005e-01,
      4.729054132581005e-01,     -7.434520429875557e-01,      4.729054132581005e-01,
     -4.729054132581005e-01,     -7.434520429875557e-01,      4.729054132581005e-01,
      4.729054132581005e-01,      7.434520429875557e-01,     -4.729054132581005e-01,
     -4.729054132581005e-01,      7.434520429875557e-01,     -4.729054132581005e-01,
      4.729054132581005e-01,     -7.434520429875557e-01,     -4.729054132581005e-01,
     -4.729054132581005e-01,     -7.434520429875557e-01,     -4.729054132581005e-01,
      7.434520429875557e-01,      4.729054132581005e-01,      4.729054132581005e-01,
     -7.434520429875557e-01,      4.729054132581005e-01,      4.729054132581005e-01,
      7.434520429875557e-01,     -4.729054132581005e-01,      4.729054132581005e-01,
     -7.434520429875557e-01,     -4.729054132581005e-01,      4.729054132581005e-01,
      7.434520429875557e-01,      4.729054132581005e-01,     -4.729054132581005e-01,
     -7.434520429875557e-01,      4.729054132581005e-01,     -4.729054132581005e-01,
      7.434520429875557e-01,     -4.729054132581005e-01,     -4.729054132581005e-01,
     -7.434520429875557e-01,     -4.729054132581005e-01,     -4.729054132581005e-01,
      9.618308522614784e-02,      9.618308522614784e-02,      9.907056213794081e-01,
     -9.618308522614784e-02,      9.618308522614784e-02,      9.907056213794081e-01,
      9.618308522614784e-02,     -9.618308522614784e-02,      9.907056213794081e-01,
     -9.618308522614784e-02,     -9.618308522614784e-02,      9.907056213794081e-01,
      9.618308522614784e-02,      9.618308522614784e-02,     -9.907056213794081e-01,
     -9.618308522614784e-02,      9.618308522614784e-02,     -9.907056213794081e-01,
      9.618308522614784e-02,     -9.618308522614784e-02,     -9.907056213794081e-01,
     -9.618308522614784e-02,     -9.618308522614784e-02,     -9.907056213794081e-01,
      9.618308522614784e-02,      9.907056213794081e-01,      9.618308522614784e-02,
     -9.618308522614784e-02,      9.907056213794081e-01,      9.618308522614784e-02,
      9.618308522614784e-02,     -9.907056213794081e-01,      9.618308522614784e-02,
     -9.618308522614784e-02,     -9.907056213794081e-01,      9.618308522614784e-02,
      9.618308522614784e-02,      9.907056213794081e-01,     -9.618308522614784e-02,
     -9.618308522614784e-02,      9.907056213794081e-01,     -9.618308522614784e-02,
      9.618308522614784e-02,     -9.907056213794081e-01,     -9.618308522614784e-02,
     -9.618308522614784e-02,     -9.907056213794081e-01,     -9.618308522614784e-02,
      9.907056213794081e-01,      9.618308522614784e-02,      9.618308522614784e-02,
     -9.907056213794081e-01,      9.618308522614784e-02,      9.618308522614784e-02,
      9.907056213794081e-01,     -9.618308522614784e-02,      9.618308522614784e-02,
     -9.907056213794081e-01,     -9.618308522614784e-02,      9.618308522614784e-02,
      9.907056213794081e-01,      9.618308522614784e-02,     -9.618308522614784e-02,
     -9.907056213794081e-01,      9.618308522614784e-02,     -9.618308522614784e-02,
      9.907056213794081e-01,     -9.618308522614784e-02,     -9.618308522614784e-02,
     -9.907056213794081e-01,     -9.618308522614784e-02,     -9.618308522614784e-02,
      2.219645236294178e-01,      2.219645236294178e-01,      9.494543172264431e-01,
     -2.219645236294178e-01,      2.219645236294178e-01,      9.494543172264431e-01,
      2.219645236294178e-01,     -2.219645236294178e-01,      9.494543172264431e-01,
     -2.219645236294178e-01,     -2.219645236294178e-01,      9.494543172264431e-01,
      2.219645236294178e-01,      2.219645236294178e-01,     -9.494543172264431e-01,
     -2.219645236294178e-01,      2.219645236294178e-01,     -9.494543172264431e-01,
      2.219645236294178e-01,     -2.219645236294178e-01,     -9.494543172264431e-01,
     -2.219645236294178e-01,     -2.219645236294178e-01,     -9.494543172264431e-01,
      2.219645236294178e-01,      9.494543172264431e-01,      2.219645236294178e-01,
     -2.219645236294178e-01,      9.494543172264431e-01,      2.219645236294178e-01,
      2.219645236294178e-01,     -9.494543172264431e-01,      2.219645236294178e-01,
     -2.219645236294178e-01,     -9.494543172264431e-01,      2.219645236294178e-01,
      2.219645236294178e-01,      9.494543172264431e-01,     -2.219645236294178e-01,
     -2.219645236294178e-01,      9.494543172264431e-01,     -2.219645236294178e-01,
      2.219645236294178e-01,     -9.494543172264431e-01,     -2.219645236294178e-01,
     -2.219645236294178e-01,     -9.494543172264431e-01,     -2.219645236294178e-01,
      9.494543172264431e-01,      2.219645236294178e-01,      2.219645236294178e-01,
     -9.494543172264431e-01,      2.219645236294178e-01,      2.219645236294178e-01,
      9.494543172264431e-01,     -2.219645236294178e-01,      2.219645236294178e-01,
     -9.494543172264431e-01,     -2.219645236294178e-01,      2.219645236294178e-01,
      9.494543172264431e-01,      2.219645236294178e-01,     -2.219645236294178e-01,
     -9.494543172264431e-01,      2.219645236294178e-01,     -2.219645236294178e-01,
      9.494543172264431e-01,     -2.219645236294178e-01,     -2.219645236294178e-01,
     -9.494543172264431e-01,     -2.219645236294178e-01,     -2.219645236294178e-01,
      7.011766416089545e-01,      7.011766416089545e-01,      1.292386727105144e-01,
     -7.011766416089545e-01,      7.011766416089545e-01,      1.292386727105144e-01,
      7.011766416089545e-01,     -7.011766416089545e-01,      1.292386727105144e-01,
     -7.011766416089545e-01,     -7.011766416089545e-01,      1.292386727105144e-01,
      7.011766416089545e-01,      7.011766416089545e-01,     -1.292386727105144e-01,
     -7.011766416089545e-01,      7.011766416089545e-01,     -1.292386727105144e-01,
      7.011766416089545e-01,     -7.011766416089545e-01,     -1.292386727105144e-01,
     -7.011766416089545e-01,     -7.011766416089545e-01,     -1.292386727105144e-01,
      7.011766416089545e-01,      1.292386727105144e-01,      7.011766416089545e-01,
     -7.011766416089545e-01,      1.292386727105144e-01,      7.011766416089545e-01,
      7.011766416089545e-01,     -1.292386727105144e-01,      7.011766416089545e-01,
     -7.011766416089545e-01,     -1.292386727105144e-01,      7.011766416089545e-01,
      7.011766416089545e-01,      1.292386727105144e-01,     -7.011766416089545e-01,
     -7.011766416089545e-01,      1.292386727105144e-01,     -7.011766416089545e-01,
      7.011766416089545e-01,     -1.292386727105144e-01,     -7.011766416089545e-01,
     -7.011766416089545e-01,     -1.292386727105144e-01,     -7.011766416089545e-01,
      1.292386727105144e-01,      7.011766416089545e-01,      7.011766416089545e-01,
     -1.292386727105144e-01,      7.011766416089545e-01,      7.011766416089545e-01,
      1.292386727105144e-01,     -7.011766416089545e-01,      7.011766416089545e-01,
     -1.292386727105144e-01,     -7.011766416089545e-01,      7.011766416089545e-01,
      1.292386727105144e-01,      7.011766416089545e-01,     -7.011766416089545e-01,
     -1.292386727105144e-01,      7.011766416089545e-01,     -7.011766416089545e-01,
      1.292386727105144e-01,     -7.011766416089545e-01,     -7.011766416089545e-01,
     -1.292386727105144e-01,     -7.011766416089545e-01,     -7.011766416089545e-01,
      2.644152887060663e-01,      9.644089148792060e-01,      0.000000000000000e+00,
     -2.644152887060663e-01,      9.644089148792060e-01,      0.000000000000000e+00,
      2.644152887060663e-01,     -9.644089148792060e-01,      0.000000000000000e+00,
     -2.644152887060663e-01,     -9.644089148792060e-01,      0.000000000000000e+00,
      9.644089148792060e-01,      2.644152887060663e-01,      0.000000000000000e+00,
     -9.644089148792060e-01,      2.644152887060663e-01,      0.000000000000000e+00,
      9.644089148792060e-01,     -2.644152887060663e-01,      0.000000000000000e+00,
     -9.644089148792060e-01,     -2.644152887060663e-01,      0.000000000000000e+00,
      2.644152887060663e-01,      0.000000000000000e+00,      9.644089148792060e-01,
     -2.644152887060663e-01,      0.000000000000000e+00,      9.644089148792060e-01,
      2.644152887060663e-01,      0.000000000000000e+00,     -9.644089148792060e-01,
     -2.644152887060663e-01,      0.000000000000000e+00,     -9.644089148792060e-01,
      9.644089148792060e-01,      0.000000000000000e+00,      2.644152887060663e-01,
     -9.644089148792060e-01,      0.000000000000000e+00,      2.644152887060663e-01,
      9.644089148792060e-01,      0.000000000000000e+00,     -2.644152887060663e-01,
     -9.644089148792060e-01,      0.000000000000000e+00,     -2.644152887060663e-01,
      0.000000000000000e+00,      2.644152887060663e-01,      9.644089148792060e-01,
      0.000000000000000e+00,     -2.644152887060663e-01,      9.644089148792060e-01,
      0.000000000000000e+00,      2.644152887060663e-01,     -9.644089148792060e-01,
      0.000000000000000e+00,     -2.644152887060663e-01,     -9.644089148792060e-01,
      0.000000000000000e+00,      9.644089148792060e-01,      2.644152887060663e-01,
      0.000000000000000e+00,     -9.644089148792060e-01,      2.644152887060663e-01,
      0.000000000000000e+00,      9.644089148792060e-01,     -2.644152887060663e-01,
      0.000000000000000e+00,     -9.644089148792060e-01,     -2.644152887060663e-01,
      5.718955891878961e-01,      8.203264198277593e-01,      0.000000000000000e+00,
     -5.718955891878961e-01,      8.203264198277593e-01,      0.000000000000000e+00,
      5.718955891878961e-01,     -8.203264198277593e-01,      0.000000000000000e+00,
     -5.718955891878961e-01,     -8.203264198277593e-01,      0.000000000000000e+00,
      8.203264198277593e-01,      5.718955891878961e-01,      0.000000000000000e+00,
     -8.203264198277593e-01,      5.718955891878961e-01,      0.000000000000000e+00,
      8.203264198277593e-01,     -5.718955891878961e-01,      0.000000000000000e+00,
     -8.203264198277593e-01,     -5.718955891878961e-01,      0.000000000000000e+00,
      5.718955891878961e-01,      0.000000000000000e+00,      8.203264198277593e-01,
     -5.718955891878961e-01,      0.000000000000000e+00,      8.203264198277593e-01,
      5.718955891878961e-01,      0.000000000000000e+00,     -8.203264198277593e-01,
     -5.718955891878961e-01,      0.000000000000000e+00,     -8.203264198277593e-01,
      8.203264198277593e-01,      0.000000000000000e+00,      5.718955891878961e-01,
     -8.203264198277593e-01,      0.000000000000000e+00,      5.718955891878961e-01,
      8.203264198277593e-01,      0.000000000000000e+00,     -5.718955891878961e-01,
     -8.203264198277593e-01,      0.000000000000000e+00,     -5.718955891878961e-01,
      0.000000000000000e+00,      5.718955891878961e-01,      8.203264198277593e-01,
      0.000000000000000e+00,     -5.718955891878961e-01,      8.203264198277593e-01,
      0.000000000000000e+00,      5.718955891878961e-01,     -8.203264198277593e-01,
      0.000000000000000e+00,     -5.718955891878961e-01,     -8.203264198277593e-01,
      0.000000000000000e+00,      8.203264198277593e-01,      5.718955891878961e-01,
      0.000000000000000e+00,     -8.203264198277593e-01,      5.718955891878961e-01,
      0.000000000000000e+00,      8.203264198277593e-01,     -5.718955891878961e-01,
      0.000000000000000e+00,     -8.203264198277593e-01,     -5.718955891878961e-01,
      2.510034751770465e-01,      8.000727494073951e-01,      5.448677372580774e-01,
     -2.510034751770465e-01,      8.000727494073951e-01,      5.448677372580774e-01,
      2.510034751770465e-01,     -8.000727494073951e-01,      5.448677372580774e-01,
     -2.510034751770465e-01,     -8.000727494073951e-01,      5.448677372580774e-01,
      2.510034751770465e-01,      8.000727494073951e-01,     -5.448677372580774e-01,
     -2.510034751770465e-01,      8.000727494073951e-01,     -5.448677372580774e-01,
      2.510034751770465e-01,     -8.000727494073951e-01,     -5.448677372580774e-01,
     -2.510034751770465e-01,     -8.000727494073951e-01,     -5.448677372580774e-01,
      2.510034751770465e-01,      5.448677372580774e-01,      8.000727494073951e-01,
     -2.510034751770465e-01,      5.448677372580774e-01,      8.000727494073951e-01,
      2.510034751770465e-01,     -5.448677372580774e-01,      8.000727494073951e-01,
     -2.510034751770465e-01,     -5.448677372580774e-01,      8.000727494073951e-01,
      2.510034751770465e-01,      5.448677372580774e-01,     -8.000727494073951e-01,
     -2.510034751770465e-01,      5.448677372580774e-01,     -8.000727494073951e-01,
      2.510034751770465e-01,     -5.448677372580774e-01,     -8.000727494073951e-01,
     -2.510034751770465e-01,     -5.448677372580774e-01,     -8.000727494073951e-01,
      8.000727494073951e-01,      2.510034751770465e-01,      5.448677372580774e-01,
     -8.000727494073951e-01,      2.510034751770465e-01,      5.448677372580774e-01,
      8.000727494073951e-01,     -2.510034751770465e-01,      5.448677372580774e-01,
     -8.000727494073951e-01,     -2.510034751770465e-01,      5.448677372580774e-01,
      8.000727494073951e-01,      2.510034751770465e-01,     -5.448677372580774e-01,
     -8.000727494073951e-01,      2.510034751770465e-01,     -5.448677372580774e-01,
      8.000727494073951e-01,     -2.510034751770465e-01,     -5.448677372580774e-01,
     -8.000727494073951e-01,     -2.510034751770465e-01,     -5.448677372580774e-01,
      8.000727494073951e-01,      5.448677372580774e-01,      2.510034751770465e-01,
     -8.000727494073951e-01,      5.448677372580774e-01,      2.510034751770465e-01,
      8.000727494073951e-01,     -5.448677372580774e-01,      2.510034751770465e-01,
     -8.000727494073951e-01,     -5.448677372580774e-01,      2.510034751770465e-01,
      8.000727494073951e-01,      5.448677372580774e-01,     -2.510034751770465e-01,
     -8.000727494073951e-01,      5.448677372580774e-01,     -2.510034751770465e-01,
      8.000727494073951e-01,     -5.448677372580774e-01,     -2.510034751770465e-01,
     -8.000727494073951e-01,     -5.448677372580774e-01,     -2.510034751770465e-01,
      5.448677372580774e-01,      2.510034751770465e-01,      8.000727494073951e-01,
     -5.448677372580774e-01,      2.510034751770465e-01,      8.000727494073951e-01,
      5.448677372580774e-01,     -2.510034751770465e-01,      8.000727494073951e-01,
     -5.448677372580774e-01,     -2.510034751770465e-01,      8.000727494073951e-01,
      5.448677372580774e-01,      2.510034751770465e-01,     -8.000727494073951e-01,
     -5.448677372580774e-01,      2.510034751770465e-01,     -8.000727494073951e-01,
      5.448677372580774e-01,     -2.510034751770465e-01,     -8.000727494073951e-01,
     -5.448677372580774e-01,     -2.510034751770465e-01,     -8.000727494073951e-01,
      5.448677372580774e-01,      8.000727494073951e-01,      2.510034751770465e-01,
     -5.448677372580774e-01,      8.000727494073951e-01,      2.510034751770465e-01,
      5.448677372580774e-01,     -8.000727494073951e-01,      2.510034751770465e-01,
     -5.448677372580774e-01,     -8.000727494073951e-01,      2.510034751770465e-01,
      5.448677372580774e-01,      8.000727494073951e-01,     -2.510034751770465e-01,
     -5.448677372580774e-01,      8.000727494073951e-01,     -2.510034751770465e-01,
      5.448677372580774e-01,     -8.000727494073951e-01,     -2.510034751770465e-01,
     -5.448677372580774e-01,     -8.000727494073951e-01,     -2.510034751770465e-01,
      1.233548532583327e-01,      4.127724083168531e-01,      9.024425295330004e-01,
     -1.233548532583327e-01,      4.127724083168531e-01,      9.024425295330004e-01,
      1.233548532583327e-01,     -4.127724083168531e-01,      9.024425295330004e-01,
     -1.233548532583327e-01,     -4.127724083168531e-01,      9.024425295330004e-01,
      1.233548532583327e-01,      4.127724083168531e-01,     -9.024425295330004e-01,
     -1.233548532583327e-01,      4.127724083168531e-01,     -9.024425295330004e-01,
      1.233548532583327e-01,     -4.127724083168531e-01,     -9.024425295330004e-01,
     -1.233548532583327e-01,     -4.127724083168531e-01,     -9.024425295330004e-01,
      1.233548532583327e-01,      9.024425295330004e-01,      4.127724083168531e-01,
     -1.233548532583327e-01,      9.024425295330004e-01,      4.127724083168531e-01,
      1.233548532583327e-01,     -9.024425295330004e-01,      4.127724083168531e-01,
     -1.233548532583327e-01,     -9.024425295330004e-01,      4.127724083168531e-01,
      1.233548532583327e-01,      9.024425295330004e-01,     -4.127724083168531e-01,
     -1.233548532583327e-01,      9.024425295330004e-01,     -4.127724083168531e-01,
      1.233548532583327e-01,     -9.024425295330004e-01,     -4.127724083168531e-01,
     -1.233548532583327e-01,     -9.024425295330004e-01,     -4.127724083168531e-01,
      4.127724083168531e-01,      1.233548532583327e-01,      9.024425295330004e-01,
     -4.127724083168531e-01,      1.233548532583327e-01,      9.024425295330004e-01,
      4.127724083168531e-01,     -1.233548532583327e-01,      9.024425295330004e-01,
     -4.127724083168531e-01,     -1.233548532583327e-01,      9.024425295330004e-01,
      4.127724083168531e-01,      1.233548532583327e-01,     -9.024425295330004e-01,
     -4.127724083168531e-01,      1.233548532583327e-01,     -9.024425295330004e-01,
      4.127724083168531e-01,     -1.233548532583327e-01,     -9.024425295330004e-01,
     -4.127724083168531e-01,     -1.233548532583327e-01,     -9.024425295330004e-01,
      4.127724083168531e-01,      9.024425295330004e-01,      1.233548532583327e-01,
     -4.127724083168531e-01,      9.024425295330004e-01,      1.233548532583327e-01,
      4.127724083168531e-01,     -9.024425295330004e-01,      1.233548532583327e-01,
     -4.127724083168531e-01,     -9.024425295330004e-01,      1.233548532583327e-01,
      4.127724083168531e-01,      9.024425295330004e-01,     -1.233548532583327e-01,
     -4.127724083168531e-01,      9.024425295330004e-01,     -1.233548532583327e-01,
      4.127724083168531e-01,     -9.024425295330004e-01,     -1.233548532583327e-01,
     -4.127724083168531e-01,     -9.024425295330004e-01,     -1.233548532583327e-01,
      9.024425295330004e-01,      1.233548532583327e-01,      4.127724083168531e-01,
     -9.024425295330004e-01,      1.233548532583327e-01,      4.127724083168531e-01,
      9.024425295330004e-01,     -1.233548532583327e-01,      4.127724083168531e-01,
     -9.024425295330004e-01,     -1.233548532583327e-01,      4.127724083168531e-01,
      9.024425295330004e-01,      1.233548532583327e-01,     -4.127724083168531e-01,
     -9.024425295330004e-01,      1.233548532583327e-01,     -4.127724083168531e-01,
      9.024425295330004e-01,     -1.233548532583327e-01,     -4.127724083168531e-01,
     -9.024425295330004e-01,     -1.233548532583327e-01,     -4.127724083168531e-01,
      9.024425295330004e-01,      4.127724083168531e-01,      1.233548532583327e-01,
     -9.024425295330004e-01,      4.127724083168531e-01,      1.233548532583327e-01,
      9.024425295330004e-01,     -4.127724083168531e-01,      1.233548532583327e-01,
     -9.024425295330004e-01,     -4.127724083168531e-01,      1.233548532583327e-01,
      9.024425295330004e-01,      4.127724083168531e-01,     -1.233548532583327e-01,
     -9.024425295330004e-01,      4.127724083168531e-01,     -1.233548532583327e-01,
      9.024425295330004e-01,     -4.127724083168531e-01,     -1.233548532583327e-01,
     -9.024425295330004e-01,     -4.127724083168531e-01,     -1.233548532583327e-01
  };


  static constexpr std::array<T,302> weights = {
        8.545911725128148e-04,
        8.545911725128148e-04,
        8.545911725128148e-04,
        8.545911725128148e-04,
        8.545911725128148e-04,
        8.545911725128148e-04,
        3.599119285025571e-03,
        3.599119285025571e-03,
        3.599119285025571e-03,
        3.599119285025571e-03,
        3.599119285025571e-03,
        3.599119285025571e-03,
        3.599119285025571e-03,
        3.599119285025571e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.449788424305883e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.604822601419882e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        3.576729661743367e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        2.352101413689164e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.108953122413675e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        3.650045807677255e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        2.982344963171804e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.600820932216460e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.571540554273387e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03,
        3.392312205006170e-03
  };
};
};
}
