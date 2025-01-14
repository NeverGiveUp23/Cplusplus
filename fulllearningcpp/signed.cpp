#include <iostream>
#include <cstdint>


int main() {

  signed short negNum{127};
    negNum += 1;
    std::cout << negNum << "\n";

    unsigned int x {2};
    unsigned int y{3};

    std::cout << x - y << "\n"; // will be 4294967295 due to not being able to hold negative numbers, one of the many problems with uynsigned

    std::uint32_t t {2'147'483'647}; // ensures int is 32 bits and is unsigned due to the uint
    std::int32_t tS {2'147'483'647}; // ensure signed int is 32 bits
    std::uint16_t f {}; // unsigned 16 bits -> 2 bytes
    std::int8_t c {}; // 8 bits usually for char since char is 1 byte


  return 0;
}
