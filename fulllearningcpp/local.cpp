#include "header.h"
#include <iostream>

int add(int a, int b) { // a and b are local scope to the function
  int total{a + b};

  return total; // total is local scope to the function
} // a , b , and total are destroyed here!

void printSum(int value);

int main() {
  // x is not in scope , cannot be used yet
  int x{}; // x gets in scope, can be used

  printName(); // coming from the header file
  return 0;
} // x is destroyed
