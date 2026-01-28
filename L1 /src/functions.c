#include <stdio.h>
#include "../include/functions.h"


float CelsiusToFahrenheit(float celsius) {
  return (celsius * (1.8)) + 32;
}

float CelsiusToKelvin(float celsius) {
  return celsius + 273.15;
}

float FahrenheitToCelsius(float fahrenheit) {
  return (fahrenheit - 32) * (5/9);
}

float KelvinToCelsius(float kelvin) {
  return kelvin - 273.15;
}
