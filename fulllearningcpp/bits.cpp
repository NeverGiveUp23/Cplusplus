#include <climits> // for CHAR_BIT
#include <iomanip>
#include <iostream>

int main() {
  std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

  std::cout << std::left; // left justify output

  std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n"; // 1 byte
  std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n"; // 1 byte
  std::cout << std::setw(16) << "short:" << sizeof(short)
            << " bytes\n";                                           // 2 bytes
  std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n"; // 4 bytes
  std::cout << std::setw(16) << "long:" << sizeof(long)
            << " bytes\n"; // 4 bytes
  std::cout << std::setw(16) << "long long:" << sizeof(long long)
            << " bytes\n"; // 8 bytes
  std::cout << std::setw(16) << "float:" << sizeof(float)
            << " bytes\n"; // 4 bytes
  std::cout << std::setw(16) << "double:" << sizeof(double)
            << " bytes\n";                                            // 8 bytes
  std::cout << std::setw(16) << "long double:" << sizeof(long double) // 8 bytes
            << " bytes\n";

  return 0;
}
