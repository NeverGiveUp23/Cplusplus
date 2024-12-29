//
// Created by Felix Vargas Jr on 11/19/24.
//
#include <algorithm>
#include <iostream>
#include <vector>
// ranged based for loop
using namespace std;

std::vector<int> numbers(10);

int main() {

  for (int i : numbers) {
    std::cout << i << std::endl;
  }

  return 0;
}
