//
// Created by Felix Vargas Jr on 1/13/25.
//
#include <iostream>

inline void print(int x){
    std::cout << x << "\n";
}

int main(){
    float x{5.8};
    print(static_cast<float>(x));

    int i = 99;
    std::cout << static_cast<float>(i) << "\n";

    return 0;
}