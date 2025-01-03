//
// Created by Felix Vargas Jr on 1/1/25.
//

#include <iostream>
#include <vector>
#include <string>
#include <string_view>
#include <cstdlib>
#include <ctime>

#define SIDES 6;


int main(){
    std::string_view name = "Alec";
    std::cout << name << " has " << name.length() << "chars" << " with a size in bytes: " << std::size(name) << "\n";

    std::array arr{1,2,3,4,5};
    std::array<int, 5> myArray {1,2,3,4,5 };

    for(int i : arr){
        std::cout << myArray[i] << ", ";
    }






    return 0;
}
