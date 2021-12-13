// Copyright (c) 2021 Alexander Matheson All rights reserved.
//
// Created by: Alexander Matheson
// Created on: Dec 12, 2021
// This program gets the user to enter a number.
// It then tells them the month that corresponds to that number.
#include <iostream>


int main() {
    // this function checks the user's number
    int userNumber;

    // get userinput
    std::cout << "Enter your number: ";
    std::cin >> userNumber;

    switch (userNumber) {
        case 1 :
            std::cout << "The month corresponding to "
            << userNumber << " is January \n";
            break;
        case 2 :
            std::cout << "The month corresponding to "
            << userNumber << " is February \n";
            break;
        case 3 :
            std::cout << "The month corresponding to "
            << userNumber << " is March \n";
            break;
        case 4 :
           std::cout << "The month corresponding to "
           << userNumber << " is April \n";
            break;
        case 5 :
            std::cout << "The month corresponding to "
            << userNumber << " is May \n";
            break;
        case 6 :
            std::cout << "The month corresponding to "
            << userNumber << " is June \n";
            break;
        case 7 :
            std::cout << "The month corresponding to "
            << userNumber << " is July \n";
            break;
        case 8 :
            std::cout << "The month corresponding to "
            << userNumber << " is August \n";
            break;
        case 9 :
            std::cout << "The month corresponding to "
            << userNumber << " is September \n";
            break;
        case 10 :
            std::cout << "The month corresponding to "
            << userNumber << " is October \n";
            break;
        case 11 :
            std::cout << "The month corresponding to "
            << userNumber << " is November \n";
            break;
        case 12 :
            std::cout << "The month corresponding to "
            << userNumber << " is December \n";
            break;
        default :
            std::cout << userNumber <<
            " does not correspond to a month.\n";
    }
}
