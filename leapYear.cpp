// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program is the leap year checker

#include <iostream>
#include <string>

int main() {
    // This function checks if the given year is a leap year or not
    std::string userYearString;
    int userYear;

    // input
        std::cout << "Please enter the year: ";
        std::cin >> userYearString;

    try {
        /* https://stackoverflow.com/questions
        /7663709/how-can-i-convert-a-stdstring-to-int */
        userYear = std::stoi(userYearString);

        // process & output
        if (userYear % 4 == 0) {
            if (userYear % 100 == 0) {
                if (userYear % 400 == 0) {
                    std::cout << userYear << " is a leap year." << std::endl;
                } else {
                    std::cout << userYear << " is not a leap year." <<
                    std::endl;
                }
            } else {
                std::cout << userYear << " is a leap year." << std::endl;
            }
        } else {
            std::cout << userYear << " is not a leap year." << std::endl;
        }
    } catch(...) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone.";
}
