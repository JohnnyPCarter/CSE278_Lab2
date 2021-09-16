/*
 * This class takes in a username and a password and sees if
 * it matches what is stored
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    //declares variables
    std::string username = "21_CSE_c++_Fall";
    std::string password = "278A&B";
    bool usernameIsCorrect = false;
    bool passwordIsCorrect = false;
    // checks the username and password for the first time
    std::cout << ("Username: ");
    std::string tempUsername = "";
    std::cin >> tempUsername;
    if (tempUsername == username) {
        usernameIsCorrect = true;
        std::cout << ("u: ");
    }
    std::string tempPassword = "";
    std::cout << ("PassWord: ");
    std::cin >> tempPassword;
    if (tempPassword == password) {
        passwordIsCorrect = true;
    }
    //Keeps the user trying passwords and usernames till they get it
    while (!usernameIsCorrect || !passwordIsCorrect) {
        passwordIsCorrect = false;
        usernameIsCorrect = false;
        std::cout << "Login failed" << std::endl;
        std::cout << "Username: ";
        std::cin >> tempUsername;
        if (tempUsername == username) {
            usernameIsCorrect = true;
        }
        std::cout << ("PassWord: ");
        std::cin >> tempPassword;
        if (tempPassword == password) {
            passwordIsCorrect = true;
        }
    }    
    //lets the user know that they logged in
    std::cout << ("login success");
    return 0;
}
