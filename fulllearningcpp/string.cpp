//
// Created by Felix Vargas Jr on 1/13/25.
//
#include <iostream>

int main(){

    std::cout << "Enter a name: ";
    std::string name {};
    std::cin >> name;

    std::cout << "Enter a color: ";
    std::string color{};
    std::cin >> color;

    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';
    //  using operator>> to extract a string from std::cin, operator>> only returns characters up to the first whitespace it encounters.
    //  Any other characters are left inside std::cin, waiting for the next extraction.

    // we can use the getline() function instead -> it requires two arguments, the first is std::cin >> , and the second is the string variable
    std::getline(std::cin >> std::ws, color); // read a full line of text into color
    // std::ws ignores any leading whitespaces before extraction. Ny whitespaces that occur before the string



    return 0;
}