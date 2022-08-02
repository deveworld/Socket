#pragma once
#include <iostream>
#include "Console.hpp"

void clear() {
    #ifdef _WIN32
    system("cls");
    #endif
    #ifdef linux
    system("clear");
    #endif
}

std::string question(std::string message, bool noBlank) {
    clear();
    std::cout << message;
    std::string input;
    std::cin >> input;
    clear();
    if (noBlank)
    {
        while (input.empty())
        {
            std::cout << message;
            std::cin >> input;
            clear();
        }
    }
    return input;
}