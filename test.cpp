#include "sorter.hpp"
#include "utility.hpp"

int main()
{    
    int unsortedArray[] {6, 2, 3, 4, 5, 1, 0, 8, 7, 8, 0, 3};
    int len = sizeof(unsortedArray) / sizeof(unsortedArray[0]);
    Utility::PrintArray(unsortedArray, len, "start: ");

    int* sortedArray = Sorter::MergeSort(unsortedArray, 0, len - 1);
    Utility::PrintArray(sortedArray, len, "MergeSort: ");

    return 0;
}