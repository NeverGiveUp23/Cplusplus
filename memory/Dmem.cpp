//
// Created by Felix Vargas Jr on 12/2/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


void Malloc() {
    //performing a cast between due to c++ compiler and the malloc void pointer
    int *p = static_cast<int *>(malloc(sizeof(int))); // getting the size and allocating that size on the heap
    *p = 99;
    int &y = *p;
    printf("%d\n",&p);
    printf("%d\n", y);
    free(p); // dangling pointer
    p = nullptr; // after freeing the memory;

    int *i = (int*) calloc(1, sizeof(int ));
    // check the return type
    if(i == NULL) { // check the value in the pointer
        printf("Failed to allocate memory\n");
        exit(0);
    };
    *i = 5; // 0x00006000015ac000 -> 00 00 00 00   00 00 00 00  00 00 00 00  00 00 00 00
    printf("%d\n", *i); // 0x00006000015ac000 -> 05 00 00 00   00 00 00 00  00 00 00 00  00 00 00 00
    free(i);
    i = nullptr;


    // if i want to allocate memory for an array
    // the first argument is where we can say how much memory we need, this case 5 ints in the array



    int *arr = (int*) calloc(5, sizeof(int));
    free(arr);
    arr = NULL;
    // for malloc we need to multiply
    int *arrm = static_cast<int *>(malloc(5 * sizeof(int)));
    // displaying the allocated memory
    if(arrm == NULL) {
        printf("Failed allocating memory\n");
        exit(0);
    } else {
        printf("Memory allocated successfully\n");
        int i;

        for(i = 0; i < 20; ++i){
            arrm[i] = i + 1;
        }

        for (int i = 0; i < 20; ++i) {
            printf("%d\n ", arrm[i]);
        }
    }
    free(arrm);
    arrm = NULL;

}


// int Cpp you can use 'new', delete

void New() {
    int *p = new int; // only specifying the type -> the compiler knows the size of the type.
    *p = 9;

    cout << *p << endl;

    delete p; // free the memory
    p = nullptr;

    // you can initialize in the declaration
    int *d = new int(5); //

    cout << *d << endl;

    delete d;
    d = nullptr;


}


void NewArrays() {


    // new for arrays

    int *arr = new int[5]; //{1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        arr[i] = i;
    }
    delete []arr; // using []arr to specify the array type to ensure it is all deleted
}

void Strings() {
    char *p = new char[5]; // add another for a null terminated
    strcpy(p , "Code");
    cout << p << endl;

    delete []p;
    p = nullptr;
}

void TwoDArr() {
    int *p1 = new int[3]{1,5,9};
    int *p2 = new int[3]{2,9,8};

    int **pData = new int *[2]; // '**' pointer pointing to a pointer

    pData[0] = p1;
    pData[1] = p2;



   cout << pData[0][1] << endl;

    delete []p1;
    delete []p2;
    delete []pData;

}



int main() {

TwoDArr();


    return 0;
}