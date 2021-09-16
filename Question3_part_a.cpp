/*
 * This class creates an array of integers and then finds
 * the min and max
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    unsigned int max = 0;
    unsigned int min = 0;
    //finds the length of the array and creates it
    std::cout << "How many numbers do you have: ";
    int length = 0;
    std::cin >> length;
    unsigned int arr[length];
    //fills the array and finds the min and max
    for (int i = 0; i < length; i++) {
        std::cout << "Enter number: ";
        std::cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    //returns the results
    std::cout << "The max is " << max << std::endl;
    std::cout << "The min is " << min << std::endl;
    return 0;
}

