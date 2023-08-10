#include "sorter.hpp"

int* Sorter::MergeSort(int* array, int left, int right)
{
    if (left == right) {
        return new int[1]{array[left]};
    }

    int middle = (left + right) / 2;
    int* A = MergeSort(array, left, middle);
    int* B = MergeSort(array, middle + 1, right);

    int resLen = right - left + 1;
    int* resArray = new int[resLen];
    int lenA = middle - left + 1;
    int lenB = right - middle;
    int pA = 0;
    int pB = 0;

    for (int i = 0; i < resLen; i++)
    {
        if (pA == lenA) {
            resArray[i] = B[pB++];
            continue;
        } else if (pB == lenB) {
            resArray[i] = A[pA++];
            continue;
        }

        if (A[pA] < B[pB]) {
            resArray[i] = A[pA++];
        } else {
            resArray[i] = B[pB++];
        }
    }

    delete[] A;
    delete[] B;
    return resArray;
}