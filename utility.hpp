#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <stdio.h>
#include <iostream>
#include <string>

class Utility
{
    public:
        static void PrintArray(int* array, int len, std::string msg = "");
};

#endif