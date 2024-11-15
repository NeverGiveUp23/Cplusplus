#include <iostream>
#include <string>

using std::endl; // defined globally;

int main() {

    using namespace std; // so you wouldn't need to use std << cout everytime - using namespace can only be used in effect where it is defined. You can use it gloabally but you should rarely do so.

    // there is a solution to better us 'using namespace' by using what you need.

    using std::cout; // defined within the main function space.

    // type inference by using auto tag

    auto number {4}; // will convert to int at compile time

    string first = "Hello";
    string last = "World";

    cout << first+" "+last << endl;

    int a = 100;

    int b = 99;

    if(a<=>b > 0)  { // the <=> > 0 is the same as if using a > b. It's called the spaceship operator. It is in comparison to strcmp in C.
        std::cout << a << " is greater than " << b << std::endl;
    }

    //logical operators
    if (b > 0 && b < a) { // this could've been done with two if checks but if both are bool expression depending on what you need, you can use logical operators.
        std::cout << "True" << std::endl;
    }

    int max = b > a ? (b + 12) : (b + 35);

    cout << max << ": this is max"  << endl;


    int test = 99;
    std::cout << test << std::endl; // this turns into
    cout << "Hello without std" << endl; // cout instead of std;
    return 0;
}
