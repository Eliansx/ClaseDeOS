#include <stdio.h>
#include "array_functions.h"

// Function to sort the array in ascending order
void SortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to calculate the median
double CalculateMedian(int *arr, int size) {
    if (size % 2 == 1) {
        // If the size is odd, the median is the middle element
        return arr[size / 2];
    } else {
        // If the size is even, the median is the average of middle elems
        return (arr[(size / 2) - 1] + arr[size / 2]) / 2.0;
    }
}
