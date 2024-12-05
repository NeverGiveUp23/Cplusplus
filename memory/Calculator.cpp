//
// Created by Felix Vargas Jr on 12/5/24.
//

#include <iostream>


class Calculator {
private:
    int result;

public:
    Calculator& multiply(int a, int b) {
        this->result = a * b; // this -> is optional

        return *this; // self-referencing
    }

    Calculator& square() {
        this->result *= this->result;

        return *this;
    }


    int get_result() {
        return this->result;
    }
};


int main() {


    Calculator calculator;
    calculator.multiply(2, 9);
    calculator.square();
    int result = calculator.get_result();
    std::cout << result << std::endl; // displays 324


    // calling the calculator class with function chaining

    Calculator calc;

    int result2 = calc.multiply(3,4).square().get_result();

    std::cout << result2 << std::endl;



}