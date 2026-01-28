#include <stdio.h>
#include "time_functions.h"

int main() {
    // Declare and initialize the Time structure
    struct Time current_time = {15, 5, 32};

    // Print initial time
    printf("Initial time: ");
    PrintTime(current_time);

    // Get updated time from the user
    current_time = GetTime();

    // Print updated time
    printf("Updated time: ");
    PrintTime(current_time);

    return 0;
}
