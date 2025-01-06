//
// Created by Felix Vargas Jr on 1/6/25.
//
#include <iostream>
using namespace std;


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




    return 0;
}