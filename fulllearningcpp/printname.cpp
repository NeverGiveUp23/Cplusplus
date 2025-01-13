#include "header.h"
#include <iostream>

void printName() {
  std::cout << "Hello from printname.cpp , but the forward declaration from "
               "the header.h file"
            << "\n";
}
