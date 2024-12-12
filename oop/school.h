//
// Created by Felix Vargas Jr on 12/12/24.
//

#ifndef CPLUSPLUS_SCHOOL_H
#define CPLUSPLUS_SCHOOL_H

#endif //CPLUSPLUS_SCHOOL_H
#include <iostream>
#include<vector>
#include <string>


using namespace std;

class School {
private:
    string name;

public:
    void studentName(string name);

};


void School::studentName(std::string name) {
    try {
        cout << "Enter your name: ";
        cin >> name;
        if(name.length() > 1)
            throw "Sorry, you need to enter a name";

        cout << "Your name is: " << name << endl;
    } catch (const char *e){
        cerr << "Error: " << e << endl;
    }
}