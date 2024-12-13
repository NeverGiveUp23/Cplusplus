//
// Created by Felix Vargas Jr on 12/12/24.
//


#include <iostream>
#include <string>

//T& is an lvalue reference, so this overload will be prefferred for lvalues
template <typename T>
constexpr bool is_lval(T&){
    return true;
}

//T&& is an rvalue reference,
template <typename T>
constexpr bool is_lval(T&&){
    return false;
}

#define PRINTVCAT(expr) {std::cout << #expr << " is an " << (is_lval(expr) ? "lvalue\n" : "rvalue\n"); }


int getint() { return 5; }

int main() {


    int x{5}; // is a rvalue expr
    int y{x}; // x is lvalue

    const double d{};
    const double e{d}; // d is a non-modifiable lvalue expr.

    PRINTVCAT(5);
    PRINTVCAT(getint())
    int v{5};

    PRINTVCAT(v);
    PRINTVCAT(std::string {"Hello"});
    PRINTVCAT("Hello");

    /*
     5 is an rvalue
    getint() is an rvalue
    v is an lvalue
    std::string {"Hello"} is an rvalue
    "Hello" is an lvalue
     */

    // lvalue reference(&)
    int // reg int object
    int& // lvalue ref to int object
    double& //lvalue ref to double object
    const int& // lvalue ref to const int object

    int r{5};
    int& rref{r}; // ref is an lvalue ref var that can now be used as an alias for var r

    std::cout << r << "\n";
    std::cout << rref << "\n";

    // both print out 5;

    std::cout << r << rref << "\n"; // prints out 55;

    r = 6; // r now has the value of 6;

    std::cout << r << rref << "\n"; // noq it prints 66;

    rref = 7; // the object being referenced (r) now has the value of 7;

    std::cout << r << rref << "\n"; // prints 77;

    //the code prints 55, 66, 77


    // references cannot be reseated(changed to refer to another object)

    int a{4};
    int b{6};

    int& aref{a}; // aref is now an alias for a;

    aref = b; // assigns 6 (the value of b) to a(the value being refernced by aref)
    // the above line does NOT Change aref into a reference to variable b!

    std::cout << a << "\n"; // this will print out 6 and not 4;





    return 0;
} // x,b,a and rref, aref all die here in the scope