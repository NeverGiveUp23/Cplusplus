//
// Created by Felix Vargas Jr on 12/2/24.
//

#include <stdio.h>
#include <stdlib.h>


int main() {
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
        return -1;
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


    // int Cpp you can use 'new', delete




    return 0;
}