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

int bum = 200;
int grade = 88;
double pi = 3.14;

int* pbum = &bum; // immediatly after the data type
int *pgrade = &grade; // immediatly before the var name
double * ppi = &pi; // in between w/ spaces

// define multiple pointers in one line
int *pt1 = &bum, *ptr2 = &grade; // each declaration must have *



// ways to define a null ptr
int* iptr = nullptr;
int *iptr2 = NULL;
int * iptr3 = 0;


// double function with a pointer param
void Double(double* val) {
    if(val != nullptr) { // checking to see if val is not a nullptr before derefencing it.
        *val *= *val; // dereference val and perform the calculation
    }
}


// square function with a reference param
void square (double& val) {
    val *= val;
}

// array function with a pointer param for built in array

void display_array(int* arr, int size) {
    if (arr) { // same as arr != nullptr
        int i = 0;
        for(i; i < size; i++){
            cout << arr[i] <<  " " << endl;
        }
    }
}


int main() {

TwoDArr();

string s = "Hello";
string* sptr = &s;

cout << sptr->size() << endl; // displays the size of s -> member access operator (->)

int num = 8;
int* pnum = &num;


// changing the object the pointer points too
pt1 = &grade;


// define and initialize a regualr, reference, and pointer variable
double pi2 = 3.14; // reg var
double& dref = pi2; // reference var
double* dptr = &pi2; // pointer - requires address of operator

// displaying the underlying value
cout << pi << endl; // displays 3.14
cout << dref << endl; // displays 3.14
cout << *dptr << endl; // displays 3.14 - req indirection operator
    puts("\n");


// display memory address
    puts("display memory address");
 cout << "&pi2: " <<&pi2 << endl;
 cout << "&dref: " << &dref << endl;
 cout << "&ptr: " << &dptr << endl;


 cout << pi2 << " * " << pi2 << " is: " << endl;
 // using the address operator to pass argument
    Double(&pi2);
    puts("\n");

    cout << pi2 << endl;


    const int size = 10;
    int arr[size]{0};
    display_array(arr, size);

    return 0;
}