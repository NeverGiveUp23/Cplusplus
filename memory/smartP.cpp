//
// Created by Felix Vargas Jr on 12/12/24.
//


#include <iostream>

template <typename T>

class Auto_ptr {

    T* m_ptr {};

public:
    Auto_ptr(T* ptr = nullptr) : m_ptr(ptr) {};

    ~Auto_ptr(){
        delete m_ptr;
    }

    T& operator*() const { return *m_ptr; }
    T* operator->() const { return m_ptr; }
 };

class Resource {
public:
    Resource () {
        std::cout << "Resource acquired\n";
    }

    ~Resource(){
        std::cout << "Resource Destroyed\n";
    }

    void SayHi() {
        std::cout << "Hi\n";
    }
};

void SomeFunction(){
    Auto_ptr<Resource> ptr(new Resource()); // ptr now owns the Resource


    int x;
    std::cout << "Enter an Int: ";
    std::cin >> x;

    if(x == 0)
        return;

    ptr->SayHi();
}

int main() {

    SomeFunction();
}