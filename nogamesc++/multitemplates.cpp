//
// Created by Felix Vargas Jr on 1/6/25.
//
#include <iostream>
#include <string_view>
#include <cctype>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

enum Color {
    blue,
    red,
    green
};

constexpr string_view getColor(Color color){
    switch (color) {
        case blue:
            return "Blue";
        case red:
            return "Red";
        case green:
            return "Green";
        default:
            return "???";
    }
}

string toLowerCase(string_view sv){
    string lower{};
    transform(sv.begin(), sv.end(), back_inserter(lower), [](char c) {
        return static_cast<char>(tolower(static_cast<unsigned char>(c)));
    });
    return lower;
};

constexpr optional<Color> colorToString(string_view sv){
    if(toLowerCase(sv) == "blue") return blue;
    if(toLowerCase(sv) == "red") return red;
    if(toLowerCase(sv) == "green") return green;
    return {};
}




// multi templates can be useful but identify when you would need it,
// remember if you have one template class T1, tht function will only compile
// to that one data type
// whereas if you need two diff datatype like the copy function below. You will set
// two class templates.
template<class T1, class T2>
void copy(const T1 source[], T2 destination[], int size){ // T2 is not a const due to it needing to be modified to copy the T1 array

    for(int i = 0; i < size; i++){
        destination[i] = static_cast<T2>(source[i]); // safe casting, converting to T2 data type
    };

    cout << "This is from destination copy: " << endl;
    for(int i = 0; i < size; i++){
        cout << destination[i] << endl;
    }
}


int main(){
    int ar1[] {1,2,3};

    double ar2[]{};

    copy(ar1, ar2, 3);



    constexpr Color shirt{green};

    cout << getColor(shirt) << endl;

    cout << "Enter a color: ";
    string s{};
    cin >> s;

    optional<Color> color {colorToString(s)};

    if(!color){
        cout << "You entered none of the colors" << "\n";
    } else {
        cout << " You entered: " << toLowerCase(s) << "\n";
    }


    return 0;
}