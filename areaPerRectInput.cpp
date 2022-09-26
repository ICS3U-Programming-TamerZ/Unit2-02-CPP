// Copyright (c) 2021 Tamer Zreg All rights reserved.
//
// Created by: Tamer Zreg
// Created on: Sep, 26 2022
// This program asks the user for the length
// and width of a rectangle. It then calculates
// and displays the area and perimeter.
#include <iostream>

// declare variables
float length, width, area, perimeter;

int main() {
    // get input from user
    std::cout << "Today we will calculate the area and\n";
    std::cout << "perimeter of a rectangle.\n";
    std::cout << "Enter the length (mm): ";
    std::cin >> length;
    std::cout << "Enter the width (mm): ";
    std::cin >> width;

    // calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // display the results to the user
    std::cout << std::endl;
    std::cout << "Area = " << area << " mm^2.\n";
    std::cout << "Perimeter = " << perimeter << "mm.\n";
}
