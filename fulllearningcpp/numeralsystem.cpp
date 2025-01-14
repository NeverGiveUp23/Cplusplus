//
// Created by Felix Vargas Jr on 1/13/25.
//


#include <iostream>

int main(){
    int x {0xF};
    std::cout << x << "\n"; // prints 15 int the decimal place where hexadecimal F is placed

    int bin{};    // assume 16-bit ints
    bin = 0x0001; // assign binary 0000 0000 0000 0001 to the variable
    bin = 0x0002; // assign binary 0000 0000 0000 0010 to the variable
    bin = 0x0004; // assign binary 0000 0000 0000 0100 to the variable
    bin = 0x0008; // assign binary 0000 0000 0000 1000 to the variable
    bin = 0x0010; // assign binary 0000 0000 0001 0000 to the variable
    bin = 0x0020; // assign binary 0000 0000 0010 0000 to the variable
    bin = 0x0040; // assign binary 0000 0000 0100 0000 to the variable
    bin = 0x0080; // assign binary 0000 0000 1000 0000 to the variable
    bin = 0x00FF; // assign binary 0000 0000 1111 1111 to the variable
    bin = 0x00B3; // assign binary 0000 0000 1011 0011 to the variable
    bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable

    // in C++ 14 and on
    int newBin {};
    bin = 0b1;
    bin = 0b11;
    bin = 0b1010;
    bin = 0b1011;

    std::cout << bin << "\n";


    // outputting values in hexidecimal and octal
    int h {12};
    std::cout << std::hex << h << "\n"; // prints c
    std::cout << std::dec << h << "\n"; // returns to decimal


    return 0;
}