#include <iostream>
#include "sphere.h"

int main() {
    double radius;
    
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;
    
    double volume = calc_sphere_volume(radius);
    
    std::cout << "The volume of a sphere with radius " << radius << " is: " << volume << std::endl;
    
    return 0;
}
