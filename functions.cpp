//
// Created by Felix Vargas Jr on 11/17/24.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using std::cout; using std::endl; using std::string;
using std::vector; using std::map;

int addTwo(int a, int b){
    return  a + b;
};

// you can write simple functions params to more complex ones

void funcSimple(int a);
void funcComplex(map<string, vector<int>>);

int func(); // returns an int
string funcS(); // returns a string
void funcV(); // no return value
std::pair<int, string> funcP(); // composite type from stdlib
vector<int> funcD(); // returns a new container
vector<int>& funcDP(); // reference to some container
const vector<int>& funcCDP(); // Same as above, but cannot change it

// call by value

void print(int n) {
    n = 9;
    cout << n << endl;
} // when the function is called the compiler copies the value of the argument to the position n for the function.

// Pass by reference

void printP(int& n){ // param as reference
    cout << n << " " << endl;
     n = 32;
     cout << n << "\n" << endl;
} // The compiler doesnt copy the value of x into the function but passes the x itself as a reference;
 // within the function it is then addressed with the parameter name n.


 vector<int> primes = {2};
 constexpr bool isPrime(int n) {
    for(int factor : primes) {
        if (factor * factor > n)
            return true;
        else if (n % factor == 0)
            return false;
    }

     return true;
}

void calculatePrime(int limit){
     for(int i = 3; i < limit; i = i + 2){
         if(isPrime(i)) {
             primes.push_back(i);
         }
     }
 };

 auto calculatePrime2(int limit) -> bool;
 //  function overload

 void print(float value) { cout << value << endl;}
 void print(double value){ cout << value << endl;}
void print(short value) { cout << value << endl;}
// when choosing the correct function, the compiler follows these steps - if the param exactly match an overload, it is easy. But if it doesnt, then the compiler has to choose.


// alternative notation for function declaration
// recognize the function name better when the return type becomes more complex.
auto func(int n) -> int;
auto func(double j) -> double;
auto func(string) -> vector<string>;
string m;
// if statement with initializer





// inline functions - suggesting to the compiler that it should not integrate the function code as a callable function but should insert it in place of the function call.
inline int simple(double a);


int number = 1;


int main() {
    addTwo(2, 2);

    int n = 4;

    print( n);
    cout << n << endl;


    int x = 99;
    printP(x);


    calculatePrime(35);

    int count = 0 ;

    while(number <= 10) {
        ++count;
        cout << count << ": " << "Under 10" << endl;
        number++;
    }
   number = 1;
    count = 0;

    puts("\n");

    do {
        ++count;
        cout << count << endl;
        number++;
    } while (number <= 10);

    return 0;
}
