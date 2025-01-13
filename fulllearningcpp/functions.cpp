#include <_stdlib.h>
#include <cstdlib>
#include <iostream>

template <typename T> inline void swapS(T *a, T *b) {
  T temp = *a;
  *a = *b;
  *b = temp;
}

void printName() { // void functions require not specific return value or no
                   // return
  std::cout << "Name" << "\n";
}

inline int sum() {
  std::cout << "Enter a number: ";
  int input{};
  std::cin >> input;

  std::cout << "Enter another Number: ";
  int input2{};
  std::cin >> input2;
  return input + input2;
}

inline void printSum(int value) {
  std::cout << "Total value is: " << value << "\n";
}

int user_input() {
  std::cout << "Enter an integer: " << "\n";
  int input{};
  std::cin >> input;
  return input;
}

int main() {
  int a{44};
  int b{99};
  std::cout << a << ", " << b << "\n";
  swapS(&a, &b);
  std::cout << a << ", " << b << "\n";

  char s{'S'};
  char g{'G'};
  std::cout << s << ", " << g << "\n";
  swapS(&s, &g);
  std::cout << s << ", " << g << "\n";

  int c{user_input()};

  std::cout << "number is: " << c << "\n";

  int total{sum()};
  printSum(total);

  return EXIT_SUCCESS; // status code -> same as 0. can also use exit_failure
                       // but 0 is common
}
