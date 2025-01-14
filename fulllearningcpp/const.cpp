//
// Created by Felix Vargas Jr on 1/13/25.
//
#include <iostream>
// Named constants are constant values that are associated with an identifier. These are also sometimes called symbolic constants.
// Literal constants are constant values that are not associated with an identifier.

inline void print(const std::string name);
int main() {
    // variables that can be changes at any time
    int x {88};
    x = 99;
    std::cout << x << "\n";


    // variables that cannot be changed after initialized due to const
    const std::uint32_t f{99};
    f = 88; // compile error -> cannot change const variable value

    // there are diff naming conventions with const
    const uint32_t NO_CHANGE {}; // coming from c -> declare const like so like in macros

    const uint32_t kNoChange {}; // this is more the c++ approach with 'k'


    // literals are values that are directly inserted into the code
    bool name {true}; // true is a boolean literal
    double d {8.8}; // 8.8 is a double literal
    std::cout << "Hello" << "\n"; // hello is a C-style string literal



    //suffix casting
    std::cout << 5L << "\n"; // 5L is of type Long
    std::cout << 5u << "\n"; // 5u is of type unsigned int

    // floating point literals
    float fl {4.1}; // compiler error -> 4.1 is a double literal not a float literal
    fl = 4.1f; // use 'f' suffix so the literal is a float and matches variable type of float


    // constexpr, we can get help from the compiler to ensure we get a compile time constant variable
    // constexpr is a compile time constant
    constexpr int gravity {9};
    constexpr double sum {4.5};


    std::cout << "Enter your age: " << "\n";
    int age{};
    std::cin >> age;

   // constexpr int myAge{age}; // compile error: age is not a constant expression
   // constexpr std::string f{ print("Felix") }; // compile error: return value of print() is not a constant expression


   constexpr int compileTimeConstexpr {5}; // must be at compile time
   constexpr int compileConstexpr {4 * 10}; // calculated at compile time and not runtime

   const int constCompile {9}; // even const can compile time or runtime -> this is compiled time
   const int runTimeConst {rand()}; // this will be evaluated at runtime;



    return 0;
}

// out of scope function just for example of const functions
inline void print(const std::string name){
    std::cout << name << "\n"; // cannot change the value for name once given
}