//
// Created by Felix Vargas Jr on 12/12/24.
//


#include <iostream>
#include <memory>
#include <utility>

using namespace std;

class Resource {
public:
    Resource() {cout << "Resource aquired\n";}
    ~Resource() {cout << "Resource deleted\n";}
};

int main() {
    unique_ptr<Resource> res1{new Resource{}};
    unique_ptr<Resource> res2{}; // set to null


    cout << "res1: " << (res1 ? "not Null\n" : "Null\n");
    cout << "res2: " << (res2 ? "not Null\n" : "Null\n");


    res2 = move(res1); // assumes res1, res1 is null;

    cout << "Ownership moved to res2" << endl;

    cout << "res1: " << (res1 ? "not Null\n" : "Null\n");
    cout << "res2: " << (res2 ? "not Null\n" : "Null\n");


return 0;
//Resource is deleted here as res2 is out of scope now
}