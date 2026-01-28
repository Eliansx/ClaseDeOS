#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/functions.h"


int main(int argc, char* argv[]) {
  if (argc != 3) {
    printf("Error: Invalid number of arguments.\n");
    return 1;
  }

  char unit = toupper(argv[2][0]);
  if (unit != 'F' && unit != 'C' && unit != 'K') {
    printf("Error: Invalid unit.\n");
    return 1;
  }

  if (unit == 'F') {
    float temp = atof(argv[1]);
    float result1 = FahrenheitToCelsius(temp);
    float result2 = CelsiusToKelvin(result1);
    printf("%.2f F is %.2f C and %.2f K\n", temp, result1, result2);
  } else if (unit == 'K') {
    float temp = atof(argv[1]);
    float result1 = KelvinToCelsius(temp);
    float result2 = CelsiusToFahrenheit(result1);
    printf("%.2f K is %.2f C and %.2f F\n", temp, result1, result2);
  } else if (unit == 'C') {
    float temp = atof(argv[1]);
    float result1 = CelsiusToFahrenheit(temp);
    float result2 = CelsiusToKelvin(temp);
    printf("%.2f C is %.2f F and %.2f K\n", temp, result1, result2);
  }

  return 0;
}