//
// Created by Felix Vargas Jr on 12/5/24.
//


/*
 Implementing the rule of 3 (RAII)
 */

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
    }

    // destructor
    ~MyContainer() {
        delete[] elements;
    }

    //copy instructor
    // accepts a MyContainer object by const reference.
    //
    MyContainer(const MyContainer& toCopy){
        elements = new int[size];
        for(int i = 0; i < size; i++){ // deep copy
            elements[i] = toCopy.elements[i];
        }
    }

    //Copy assignment operator
    MyContainer& operator= (const MyContainer& toCopy){
        auto temp = new int[size]; // allocate new memory
        for(int i = 0; i < size; i++){ // deep copy
            temp[i] = toCopy.elements[i];
        }
        delete[] elements; // delete old
        elements = temp; // assign new
        return *this; // return self-reference
    }


    // RAII rule of five  allows you to move the data in a more efficient way compared too copy
    // move semantics enable you to move existing data.
    MyContainer(MyContainer& toMove){
        elements = toMove.elements; // assign pointer to data;
        toMove.elements = nullptr; // remove pointer to data
    }

    // move assignment operator
    MyContainer& operator= (MyContainer&& toMove){ // the rvalue reference declarator (&&) indicates that the data of an object can be moved.
        delete[] elements; // deallocate existing memory
        elements = toMove.elements; // assign pointer to data
        toMove.elements = nullptr; // remove pointer to data
        return *this; // return self-reference
    }

};



int main() {



};
