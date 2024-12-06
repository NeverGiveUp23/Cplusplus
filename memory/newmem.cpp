//
// Created by Felix Vargas Jr on 12/5/24.
//
#include <iostream>


class MyContainer{
private:
    int* elements;
    int size = 10;
public:
    MyContainer(){
        elements = new int[size];
        std::cout << "Memory allocated for myContainer object\n";
    }

    //destructor
    ~MyContainer() {
        delete[] elements;
        std::cout << "Memory deallocated for MyContainer object\n";
    }
};

int main() {
    double* pi = new double;
    double* price = new double(3.99);


    // Dynamic memory array

    double* arr = new double[10];
    double* prices = new double[3]{1.99, 3.33, 4.44};


    delete pi;
    delete []arr;
    delete []prices;
    delete price;


    std::cout << "main() Function Starting ... \n";
    MyContainer mine;
    std::cout << "main() function ending... \n";



}