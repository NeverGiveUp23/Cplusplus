//
// Created by Felix Vargas Jr on 1/14/25.
//

#include <iostream>
#include <vector>
#include <string>
#include <string_view>

std::vector<int> v = {5,7,8,9,4};
std::vector<std::string> s = {"Hello", "Name", "Mike"};

// we can also define a vector of a given size w/o specifying the elements
std::vector<char> c(3);

inline void traverseVec(std::vector<int> vA){
    if(vA.empty()){
        std::cout << "Empty vector";
    } else {
        for(int i = 0; i < vA.size(); ++i){
            std::cout << vA[i] << "\n";
        }
    }
}


// to make it compatible with all types
template<typename T>
inline void traverseAnyVec(std::vector<T> aV){
    if(aV.empty()){
        std::cout << "Empty vector";
    }else {
        for(T i : aV){
            std::cout << i << ", ";
        }
    }
}

template<typename T>
inline void inputVec(std::vector<T> iV){
    T temps;
    double sum {0};
    if(!iV.empty()){
        std::cout << "Sorry, for this example we need an empty vector" << "\n";
    }

    for(temps; std::cin>>temps;) {
        iV.push_back(temps);
    }
    for (double x : iV) {
        sum += x;
    }
    std::cout << "Average temp: " << sum / iV.size() << "\n";
    std::ranges::sort(iV);
    std::cout << iV[iV.size() / 2]<< "\n";
}

int main(){

    std::string_view name = s[2];
    std::cout << name << "\n";
    constexpr char cvv = 'A';
    c[0] = cvv;
    c[1] = 'P';
    c[2] = 'O';
    std::cout << c[0] << '\n';

    // vector push_back
    v.push_back(99);
    c.push_back('C');
    s.push_back("Back of the vector");



    traverseVec(v);
    puts("\n");
    traverseAnyVec(c);
    puts("\n");
    traverseAnyVec(s);
    puts("\n");

    std::vector<double> iS;
    inputVec(iS);

    return 0;
}