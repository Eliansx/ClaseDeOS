#include <stdio.h>
#include "time_functions.h"

// Function to print the time in HH:MM:SS format
void PrintTime(struct Time t) {
    // 02d ensure two digits and pads zeros if necessary
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

// Function to get the current time from the user with validation
struct Time GetTime() {
    struct Time t;

    // Input hours, minutes, and seconds with validation
    do {
        printf("Enter hours (0-23): ");
        scanf("%d", &t.hours);
    } while (t.hours < 0 || t.hours > 23);

    do {
        printf("Enter minutes (0-59): ");
        scanf("%d", &t.minutes);
    } while (t.minutes < 0 || t.minutes > 59);

    do {
        printf("Enter seconds (0-59): ");
        scanf("%d", &t.seconds);
    } while (t.seconds < 0 || t.seconds > 59);

    return t;
}
