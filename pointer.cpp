//
// Created by Felix Vargas Jr on 12/2/24.
//


// REFERENCES AND POINTERS
#include <iostream>

using namespace std;

// using pass by address to swap address of the variables
void swap (int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// swapping as reference. Pass by reference -> we do not need the ptr and is much easier to read.
void SwapRef (int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


void Print(int *ptr) {
    // if trying to access a null ptr create a null check

    if (ptr != nullptr)
        cout << *ptr << endl;
    else
        cout << "You entered a nullptr" << endl;
}


void PrintRef(int &ptr) {
        cout << ptr << endl;
}


struct Person {
    char* Name;
    int Age;
};

int main(){
    int x{8};

    int *ptr = &x;

    int y = *ptr;

    cout << y << endl;

    *ptr = 20;

    cout << x << endl;



    int t = 19;
    int &ref = t;
    // both pointing to the same address
    cout << &ref << endl;
    cout << &t << endl;


    // references need an initiallizer

    struct S {
        short i;
    };

    S s; // declare the object

    S& SRef = s; // Declare amd initialize the reference

    s.i = 3;

    cout << s.i << endl;
    cout << SRef.i << endl;

    SRef.i = 99;

    cout << s.i << endl;
    cout << SRef.i << endl;


    int a, b;
    a = 10;
    b = 99;

    swap(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "Swapping back to original but with referencing" << endl;

    SwapRef(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int p = 5;

    Print(&p);

    PrintRef(p);



    // declare the Person Object
    Person myFriend;
    // declare the reference to the Person object
    Person& rFriend = myFriend;
    // updating either variable changes the same object
    myFriend.Name = "Jack";
    rFriend.Age = 45;

    cout << rFriend.Name << " is " << myFriend.Age << endl;

    int arr[]{1,2,3,4,5};

    int *aptr = &arr[0];
    int *end = &arr[5];


    while(aptr != end){
        cout << *aptr << endl;
        ++aptr;
    }

    int *begin = std::begin(arr);
    int *ending = std::end(arr);


    // declaring a function pointer to the function swap
    // when having a function with pointers and are looking to declare a pointer to the function ensure the arguments are pointers
    void(*fnp) (int*, int*) = swap;

    fnp(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;



    return 0;
}