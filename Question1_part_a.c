/*
 * This class is used to find the the area of a of 
 * a rectangle when the user gives us a a width and length
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    //Collect user data
    std::cout << "Enter the width of your rectangle:";
    unsigned int width = 0;
    std::cin >> width;
    std::cout << "Enter the length of your rectangle:";
    unsigned int length = 0;
    std::cin >> length;
    //returns results
    std::cout << "The area of the rectangle is " << width*length << std::endl;
    
    return 0;
}