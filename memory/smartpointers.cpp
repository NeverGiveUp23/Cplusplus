//
// Created by Felix Vargas Jr on 12/6/24.
//


#include <iostream>
#include <memory>
using namespace std;

// the use of smart pointer can manage memory automatically
// the weak_ptr type is often used with the shared_ptr type to avoid circular ref;

unique_ptr<int> ptr(new int); // create smart pointer to int
unique_ptr<int[]> arr(new int[10]); // create smart pointer array

// using make_unique function
// dont need to call the 'new' keyword and can use the auto keyword
auto ptr1 = make_unique<int>(); // create smart pointer to an int
auto arr1 = make_unique<int[]>(10); // create smart pointer to array


//create_array function smart pointer

unique_ptr<int[]> create_array(unsigned int size){
    auto arr = make_unique<int[]>(size);
    return arr;
}

int main() {
    *ptr = 4; // dereference and assign value;
    *ptr *= *ptr; // deref and square val;
    cout << *ptr << endl;


    for(int i = 0; i < 10; i++){ // set values of array elements
        arr[i] = i;
    }


    unsigned int size = 0;
    cout << "Please enter the size of the array: ";
    cin >> size;

    auto arr = create_array(size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " " << endl;
    } // the smart pointer automatically deallocates memory for the array
}


