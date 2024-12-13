//
// Created by Felix Vargas Jr on 12/12/24.
//

#include <iostream>
#include <bitset>

using namespace std;

int main(){
    bitset<8> bits {0b0000'0101}; // need 8 bits
    bits.set(3); // set position 3 to 1 *(now we have 0000 1101)
    bits.flip(4); // flip bit 4 now we have -> (0001 1101)
    bits.reset(4); // set bit 4 to 0 now ->  (0000 1101)


    cout << " Bit 3 has the value: " << bits.test(3) << "\n";
    cout << "Bit 4 has the value: " << bits.test(4) << "\n";

    // maybe_unused tells the compiler that we are ok with an unused variable
    // giving bits names can make our code readable
    [[maybe_unused]] constexpr int isHungry {0};
    [[maybe_unused]] constexpr int isSad {1};
    [[maybe_unused]] constexpr int isMad {2};
    [[maybe_unused]] constexpr int isHappy {3};
    [[maybe_unused]] constexpr int isLaughing {4};


    bitset<8> me {0b000'0101};
    me.set(isHappy); // set position 3 to 1 -> (0000 1101)

    return 0;
}