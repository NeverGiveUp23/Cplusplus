//
// Created by Felix Vargas Jr on 1/7/25.
//
#include <iostream>
#include <cassert>

using namespace std;

struct slistelem {
    char data;
    slistelem* next; // point to next elem in slist ->
};

class slist {
public:
    slist() : h(0) { } // h(0) denotes empty list -> unitialize the head of slist pointer h to the value 0, which is called the null-pointer constant
    ~slist() {cout << "Destructor released" << endl; release();}
    void prepend(char c); // adds front of slist
    void del(); // deletes first elem
    slistelem* first() const {return h;} // returns first elem
    void print() const;
    void release(); // destroys list


private:
    slistelem* h; // head of slist
};

inline void slist::prepend(char c) {
    slistelem* temp = new slistelem;
    assert(temp != 0);
    temp -> next = h;
    temp -> data = c;
    h = temp;
}

inline void slist::del() {
    slistelem* temp = h;
    h = h->next; // presumes not empty list
    delete(temp);
    cout << "Temp allocation deleted" << endl;
}

inline void slist::print() const {
    slistelem* temp = h;

    while(temp != 0){ // detect end of slist
        cout << temp -> data << " -> " ;
        temp = temp -> next;
    }
    cout << "\n###" << endl;
}

inline void slist::release() {
    while (h != 0){
        del();
    }
}

int main(){

    slist* p;

    {
        slist w;


        w.prepend('A');
        w.prepend('W');
        w.print();
        w.del();
        p = &w;
        p->print();
        cout << "Exiting inner block scope" << endl;
    }

    cout << "Exiting outer block" << endl;

    return 0;
}