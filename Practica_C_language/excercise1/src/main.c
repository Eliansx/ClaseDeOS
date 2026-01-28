#include <stdio.h>
#include "array_functions.h"

int main() {
    int size;

    // Ask the user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    #define kArraySize 10

    int arr[kArraySize];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    sort_array(arr, size);

    // Calculate and print the median
    double median = calculate_median(arr, size);
    printf("The median is: %.2f\n", median);

    return 0;
}
