#ifndef INCLUDE_TIME_FUNCTIONS_H_
#define INCLUDE_TIME_FUNCTIONS_H_

// Define the structure for Time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to print the time in HH:MM:SS format
void PrintTime(struct Time t);

// Function to get the current time from the user with validation
struct Time GetTime();

#endif  // INCLUDE_TIME_FUNCTIONS_H_
