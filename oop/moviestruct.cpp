//
// Created by Felix Vargas Jr on 12/6/24.
//

#include <iostream>
using namespace std;


struct Movie {
    string title = "";
    int year = 0;
    bool equals(const Movie&); //member function declaration
};

// member function definition

bool Movie::equals(const Movie& toCompare) {
    return ( title == toCompare.title && year == toCompare.year);
}

int main() {

    Movie movie;

    movie.title = "Magic";
    movie.year = 1998;

    cout << movie.title << endl;
    cout << movie.year << endl;

    return 0;
}