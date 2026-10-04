#define _USE_MATH_DEFINES
#include "sphere.h"
#include <cmath>

double calc_sphere_volume(double radius) {

    return (4.0 / 3.0) * M_PI * std::pow(radius, 3);
}