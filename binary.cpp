//
// Created by Felix Vargas Jr on 11/25/24.
//
#include <iostream>
#include <vector>

using std::cout; using std::vector; using std::cin;


int BinarySearch(vector<int> numbers, int key){
    int high = numbers.size() - 1;
    int mid;
    int low = numbers.front(); // setting low to the begining of the vector by using front() function from the stl you can use numbers[0]

// edge case whereas long as high is greater than low
// and the middle of the vector is not the inputted key.
    while(high >= low && numbers[mid] != key){
        mid = (high + low) / 2; // set the middle - adding high and low index and dived by 2
        if (numbers[mid] < key){ // check is middle is less than the inputted key
            low = mid + 1; // setting low to the new position (taking the previous middle's spot
        } else if(numbers[mid] > key){ // checking is the middle is grater than the inputted key
            high = mid - 1; // setting the high index to the previous middle position minus 1 to be the new high index
        }

        if (numbers[mid] != key) // edge case if there is no number in the vector
            mid = -1;
    };

    return mid; // returning the middle which is our correct input search
};

int main(){

    vector<int> numbers(8);
    int keyIndex;
    int i;
    int key;

    numbers[0] = 2;
    numbers[1] = 4;
    numbers[2] = 6;
    numbers[3] = 8;
    numbers[4] = 10;
    numbers[5] = 34;
    numbers[6] = 85;
    numbers[7] = 64;

    cout << "Numbers: \n";
    for( i = 0; i < numbers.size(); i++){
        cout << numbers[i] << "\n" << std::endl;
    }


    cout << "Enter a Key to search: " ;
    cin >> key;
    puts("\n");

    keyIndex = BinarySearch(numbers, key);

    if (keyIndex == -1){
        cout << "Sorry, number is not in the index" << std::endl;
    }
    else {
        cout << "Found " << key << " at " << keyIndex << std::endl;
    }



    return 0;
}