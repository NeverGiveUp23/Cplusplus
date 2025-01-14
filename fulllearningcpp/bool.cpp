//
// Created by Felix Vargas Jr on 1/13/25.
//

#include <iostream>


int main(){
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    bool zero {(x == 0)};
        if(!zero) {
            std::cout << "Is not 0" << "\n";
        } else {
            std::cout << "is 0";
        }
    return 0;
}