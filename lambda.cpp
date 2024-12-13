//
// Created by Felix Vargas Jr on 12/12/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string_view>





int main() {
std::array<std::string_view, 4> arr {"Apple", "Banana", "Cherries",  "Lemon"};

auto found{std::find_if (
        arr.begin(),
        arr.end(),
        [](std::string_view str){
    return str.find("nut") != std::string_view ::npos;
})};

if(found == arr.end()){
    std::cout <<"No nuts\n";
} else {
    std::cout << "Found!\n" << *found << "\n";
}


std::array<std::string_view, 4> arr2 {"Apple", "Fruits", "Kale", "Pineapple"};

std::cout << "Search For: ";
std::string search{};
std::cin >> search;

auto found2 {std::find_if(
        arr2.begin(),
        arr2.end(),
        [search](std::string_view str) {
            return str.find(search) != std::string_view::npos;
        }
        )};

if(found2 == arr2.end()){
    std::cout << "Not found\n";
} else {
    std::cout << "Found " << *found2 << "\n";
}

}