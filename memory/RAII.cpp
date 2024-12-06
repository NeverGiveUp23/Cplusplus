//
// Created by Felix Vargas Jr on 12/5/24.
//


#include <iostream>
using namespace std;


class MyContainer {
public:
    int* elements;
    int size = 10;


private:
    //Constructor
    MyContainer() {
        elements = new int[size]; // allocate memory
        cout << "memory allocated for MyContainer object\n";
    }

    // destructor
    ~MyContainer() {
        delete[] elements;
        cout << "Memory deallocated for MyContainer object\n";
    }

};



int main() {



};
