#include <stdio.h>
#include "time_functions.h"

int main() {
    // Declare and initialize the Time structure
    struct Time currentTime = {15, 5, 32};
    
    // Print initial time
    printf("Initial time: ");
    PrintTime(currentTime);
    
    // Get updated time from the user
    currentTime = GetTime();
    
    // Print updated time
    printf("Updated time: ");
    PrintTime(currentTime);
    
    return 0;
}
