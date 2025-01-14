//
// Created by Felix Vargas Jr on 1/14/25.
//
#include <iostream>
#include <string>
#include <string_view>

inline void repeatedWords(){
    std::string previous{};
    std::string current{};
    std::uint32_t counter{0};

    while(std::cin>>current){
        if(previous == current){
            std::cout << "repeated word: " << current << "\n";
            previous = current;
        }
        counter++;
    }
}

int main(){

repeatedWords();

    return 0;
}