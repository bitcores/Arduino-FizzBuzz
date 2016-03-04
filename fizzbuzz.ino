#include "Display.h"

void setup() {
  ht1632_setup(); 
}

void loop() {
  for (int i = 1; i < 101; i++) {
    if (floatdiv(i, 15) == (i / 15)) {
      showText("FizzBuzz");
    } else if (floatdiv(i, 3) == (i / 3)) {
      showText("Fizz");
    } else if (floatdiv(i, 5) == (i / 5)) {
      showText("Buzz");
    } else {
      char c[4];
      sprintf(c, "%d", i);
      showText(c);
    }

    delay(500);
  }
}

float floatdiv(int a, int b) {
  return (float) a / (float) b;
}

void showText(const char str[]) {
  char output[10];
  memset(output, 0, 10);
  strcpy(output, str);
  for (int i=0; i < 10; i++) {
    ht1632_putchar(0+6*i, 0, output[i], GREEN);
  }
}

