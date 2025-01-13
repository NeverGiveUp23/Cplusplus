//
// Created by Felix Vargas Jr on 1/9/25.
//
#include <iostream>

int main() {

  int x = 5; // default initializer (copy initializer)
  int y(6);  // direct initializer

  // modern way to initialize
  int c{5}; // direct-list-initialization (initial value in braces)
  int d{};  // value-initialization (empty braces)

  // direct list initialization does not allow narrowing conversions
  // initializing an int with a fraction will cause the compiler to convert
  // 4.5 to a value an int can hold

  // int w1 {4.5}; // compile error - does not allow narrowing conversion
  int w2 = 4.5; // compiles: copy-initialization will compile to value
  int w3(4.5);  // compiles: direct initialization to value 4

  // Q: When should I use list initialization or value initialization

  // use direct initialization when your going to actually be using the initial
  // value
  int li{0};
  std::cout << li << std::endl;
  int vi{};
  std::cin >> vi; // immediatly using x, so initializing with 0 is meaningless

  // initializing multiple variables
  int a, b; // creates a and b and does not initialize them

  int f = 9, i = 8; // copy initialization
  int c2(9), b2(8); // direct initialization
  int a2{4}, r(7);  // direct list initialization
  int j{}, l{};     // value initialization

  // if you see line 28, we use std::endl
  // this is an output flush that we have created which is slow and ineffiecient
  // we should use \n to end the line and start a new one while the C++ output
  // system self flushes

  // flushing is when all data is collected in the buffer is transferred to its
  // destination the buffer is a region of memory where the requested output is
  // stored

  std::cout << c2 << std::endl; // -> no need to use endl, will be slow
  // instead
  std::cout << j << "\n"; // go on to the next line w/o causing a flush

  int copy{};

  std::cin >> copy;

  return 0;
}
