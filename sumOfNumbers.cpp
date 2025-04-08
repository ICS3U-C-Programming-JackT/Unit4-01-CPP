// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: April 5, 2025
// Hangman program in C++

#include <iostream>
#include <string>

int main() {
    int counter = 0;
    int sum = 0;
    std::string userNumber;

    std::cout << "Enter an integer that isn't 0: ";
    std::cin >> userNumber;

    try {
        int userNumAsInt = std::stoi(userNumber);

        if (userNumAsInt > 0) {
            while (counter < userNumAsInt) {
                counter += 1;
                sum += counter;
            }
        } else if (userNumAsInt!=0) {
            while (counter > userNumAsInt) {
                counter -= 1;
                sum += counter;
            }
        }
        std::cout << "The sum of your numbers was " << sum << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That isn't an integer, you entered" << userNumber;
    }
}
