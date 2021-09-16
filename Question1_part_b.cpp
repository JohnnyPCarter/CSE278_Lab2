/*
 * This class lets the user know what the perimeter and area is of 
 * a circle given a radius
 */

#include <iostream>
#include <string>
#include <math.h>

int main(int argc, char** argv) {
    //Collects user data
    std::cout << "Enter the radius of your circle:";
    float radius = 0;
    std::cin >> radius;
    //returns the user data
    std::cout << "The perimeter of your circle is " << 2*M_PI*radius << std::endl;
    std::cout << "The area of your circle is " << radius*radius*M_PI << std::endl;
    
    return 0;
}