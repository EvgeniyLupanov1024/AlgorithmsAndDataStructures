#include "utility.hpp"

void Utility::PrintArray(int* array, int len, std::string msg)
{
    std::cout << msg;

    for (int i = 0; i < len; i++) {
        std::cout <<  *(array + i) << ", ";
    }
    
    std::cout << std::endl;
}
