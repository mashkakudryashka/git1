#include "sphere.h"
#include <cmath>

double calcul_sphere_volume(double radius){
    return (4/3) * M_PI * std::pow(radius, 3);
}