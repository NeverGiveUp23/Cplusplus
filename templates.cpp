//
// Created by Felix Vargas Jr on 12/12/24.
//


#include <iostream>

using namespace std;

template <typename T>
T Mymax(T a, T b) {
    return (a < b) ? a : b;
}




int main() {

    char a, b;

   cout << Mymax<char>('g', 'm');


   cout << Mymax<int>(5, 9) << endl;

}