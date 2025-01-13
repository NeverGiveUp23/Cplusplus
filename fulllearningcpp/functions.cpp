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

inline int add(int a, int b) { return a + b; }

inline int multiply(int x, int y) { return x * y; }

inline int forDec(int a,
                  int b); // forward declaration using function definition

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

  // we can also call it this way
  printSum(sum());

  std::cout << add(1, 2) << "\n";
  std::cout << multiply(5, 3) << "\n";
  std::cout << add(
      1, multiply(4, 2)); // converts to add(1 + (4 * 2)) -> 1 + 8 -> 9
  std::cout << multiply(add(2, 9), 4);

  forDec(2, 3); // this works becuase we forward declaration this function above
                // and completely defined it below the main function

  return EXIT_SUCCESS; // status code -> same as 0. can also use exit_failure
                       // but 0 is common
}

inline int forDec(int a, int b) { // okay to define here now that the compiler
                                  // knows where it is and defined
  return a + b;
}
