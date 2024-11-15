//
// Created by Felix Vargas Jr on 11/15/24.
//


#include <iostream>
#include <string>

void input(std::string &name, unsigned &birthYear, std::array<int,12> &monthlyIncome){
    int yearly = 0;
    std::cout << "Name: ";
    std::getline(std::cin , name); // get line reads a string.

    if(name.length() == 0){
        std::cout << "You did not enter a name. \n";
        exit(1);
    }


    std::cout << "birth year? ";
    std::cin >> birthYear;
    std::cout << "Monthly Income: ";
    int i;

    for(i = 0; i < 12; ++i){
        std::cout<<"Income Month " << i+1 << ": ";
        std::cin >> monthlyIncome[i];
    }

    std::cout << "Name: " << name << " Birth Year: " << birthYear << yearly << std::endl;
}


int main() {

    std::string name;
    std::array<int, 12> incomes{};

    unsigned birthYear = 0;

    input(name, birthYear, incomes);

    return 0;
}