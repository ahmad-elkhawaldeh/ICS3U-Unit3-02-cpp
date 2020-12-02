// Copyright (c) 2020 Ahmad el-khawaldeh All rights reserved.
//
// Created by Ahmad el-khawaldeh
// Created on Nov 2020
// This program checks if u got the right random number


#include <iostream>


int main() {
    const int RANDOM_NUMBER = 5;
    int input_number;

    // input
    std::cout << " enter a number from 1-9: " ;
    std::cin >>  input_number;
    std::cout << "" << std::endl;

    //process
if ( input_number == RANDOM_NUMBER) {
        //output
        std::cout << "correct (: ";
    }
}