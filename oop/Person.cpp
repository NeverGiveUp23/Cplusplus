//
// Created by Felix Vargas Jr on 11/26/24.
//
#include <string>
#include <iostream>
#include <string_view>
using std::string; using sview = std::string_view;


class Person {
    string name;
    string city;
    int age;

public:
    Person(sview n, sview c, int a) :
        name{n}, city{c}, age{a} { }
        void print();
};


void Person::print() {}