//
// Created by Felix Vargas Jr on 1/6/25.
//

#include <iostream>
#include <deque>


int main(){
    auto* myD = new std::deque<int>;

    myD->push_back(10);
    myD->push_back(10);
    myD->push_front(5);

    std::cout << "Deque elements" << std::endl;

    for(int i : *myD){
        std::cout << i << std::endl;
    };


    std::cout << "front: " << myD->front() << std::endl;
    std::cout << "back: " << myD->back() << std::endl;

    myD = nullptr;
    delete(&myD);



    return 0;
}