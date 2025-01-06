//
// Created by Felix Vargas Jr on 1/3/25.
//

#include <iostream>
#include <time.h>

using namespace std;


constexpr int SIDES {6};
constexpr int n_dice {2};

template<class T>
T circle(T name){
    std::cout << "Enter something: ";
    std::cin >> name;
    std::cout << name;
    return name;
}

// instead, lets make a template
template<class T>
inline T swapT(T* a, T* b){
    T temp = *a;
    *a = *b;
    *b = temp;
}

// or instead of pointers -> use call by reference

template<class T>
inline T swapTT(T &a, T &b){ // inline will make the swap efficient to the compiler and call by ref to int. -> will use the variable locally
    T temp = a;
    a = b; // passed by reference instead of by value
    b = temp;
}



void swapI(int* a, int* b) {
    int temp = *a;
    *a = *b; // -> pointer here is a dereferenced
    *b = temp;
}

void swap_double(double *a, double* b){
    double temp = *a;
    *a = *b;
    *b = temp;
};

    inline int r_sides(){
  return (rand() % SIDES + 1);
}

inline int* outcome = new int[n_dice * SIDES + 1];
inline int rollDice(){
    int d1, d2;
    srand(clock());
    cout << "\nEnter number of trials: " << endl;
    int trials;
    cin >> trials;

    for(int i = 0; i < trials; ++i){
        outcome[(d1 = r_sides()) + (d2 = r_sides())]++;
        for(int j = 2; j < n_dice * SIDES + 1; ++j){
            cout << "j = " << j << "p = " << static_cast<double>(outcome[j] / trials) << endl;
        }
    }

    return *outcome;

}


int main(){

    int name;
   // circle( name);

    int a = 8;
    int b = 3;
    cout << a << " : " << b << "\n";
    swapI(&a, &b);
    cout << a << " : " << b << "\n";


    double dNum = 7.9;
    double bNum = 9.9;
    cout << dNum << " : " << bNum << "\n";
    swap_double(&dNum, &bNum);
    cout << dNum << " : " << bNum << "\n";

    cout << dNum << " : " << bNum << "\n";
    swapT(&dNum, &bNum);
    cout << dNum << " : " << bNum << "\n";
    // rollDice();
    delete[](outcome);
    outcome = nullptr;


    return 0;
}