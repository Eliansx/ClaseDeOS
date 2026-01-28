#include "../include/hello.h"

#include <stdio.h>

void PrintHelloWorld() {
  int IndexForPrint;
  for (IndexForPrint = 0; IndexForPrint < 10; IndexForPrint++) {
    printf("Hello, World!...%d\n", IndexForPrint);
  }
  return;
}
