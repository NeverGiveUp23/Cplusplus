//
// Created by Felix Vargas Jr on 11/17/24.
//



#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <numeric>
// using this const into the array for a constant size of elements
constexpr  size_t DAYS = 7;

using January = std::array<int, 31>; //alias for repeated use


void initJan(January& jan){
    std::iota(begin(jan), end(jan), 1); // fills from 1,2,3..31
};


using std::array; using std::cout; using std::vector;
using namespace std::literals; using std::string; using std::endl;

int main() {

    std::vector<std::string> elves {"Elrond", "Gabrial"};

    // using namespace std::literals
    std::vector dwarves {"Oin"s, "Gloin"s};
    // the 's, you force string constructor arguments and get a vector<string> also.

    // std::vector
    /*
     all-rounder stores elements consecutively.
     You can access elements via a numeric index or iterating over ranges
     It can grow automatically when you add elements
     */

    // array

    // you can use array when you know in advanced how many elements you need


    // the number must be constant
    array<string, DAYS> week_day {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    cout << "The week starts with " << week_day[0] << endl;
    cout << "The middle is " << week_day.at(2) << endl;

    week_day.at(5) = {"Saturday"};

    cout << week_day[5] << endl;


    /*
     * passing an array as a parameter to a function, its type must be exactly
     * match the array definition. array<int,4> is diff than array<int,5>
     *
     * to avoid repeating yourself you should give the array type it own name using a 'using' or 'typedef'
     * */

    January jan;

    initJan(jan);

    // instead of the array, we can use vector which is dynamic

    vector<int> squares {}; // initializing without specifying length

    for (int idx = 0; idx < 10; ++idx) {
        squares.push_back(idx*idx); // push_back appends an element to the end
    };

    //in a vector the elements are stored consecutively in the computers memory
    // adding a element is fast in a vector except if you need to insert an element in the middile
    // this can be time consuming due to elements shifting over

    // methods to place at the back is push_back() and emplace_back()

    for(int number : squares){
        cout << number << " ";
        cout << endl;
    }

    vector count {1,2,3,4,5};

    for(int idx = 0; idx < count.size(); ++idx){ // using size() to get the total count in the vector
        cout << count[idx] << endl;
    }


    //in C++ you should use iterators instead of the index.
    // may be easier for the compiler to handle

    puts("\n\n");

    for(auto it = count.begin(); it != count.end(); ++it){ //between begin() and end()
        // with *it you get from the iterator to the element
        cout << *it << " " << endl;
    }

    /*
     * count.begin() and count.end():
     *  - returns iterators for the start and end of the container, similar to how
     *    0 and size() provide the bounds of the indexes
     *
     * auto it = count.begins():
     *  - Defines an iterator and initializes it to the start of the container
     *
     * it != count.end():
     *  - Checks if you are at the end. Always check with "not equal" never with less (<)
     *
     * *it:
     *  - Goes from the iterator to the element. You "dereference" the iterator.
     *
     */












    return 0;
}