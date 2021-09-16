/*
 * This class is used to create an array out of user integers and 
 * then find the mean of those integers 
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    double total = 0;
    //Finds length of array and creates it
    std::cout << "How many numbers do you have: ";
    int length = 0;
    std::cin >> length;
    unsigned int arr[length];
    //Creates the array and calculates total
    for (int i = 0; i < length; i++) {
        std::cout << "Enter number: ";
        std::cin >> arr[i];
        total = total + arr[i];
    }
    //Returns the mean 
    std::cout << "The mean is " << total/length << std::endl;
    return 0;
}

