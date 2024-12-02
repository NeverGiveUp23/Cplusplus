//
// Created by Felix Vargas Jr on 11/26/24.
//


#include <string>
#include <iostream>
#include <format>

using std::ostream; using std::format;

class Year {
    int value_;

public:
    Year(int v) : value_{v} {}
    int value() {return value_;}
};

class  Month {
    int value_;

public:
    Month(int v) : value_{v} {}
    int value() {return value_;}
};

class Day {
    int value_;

public:
    Day(int v) : value_{v} {}
    int value() {return value_;}
};


class Date {
    Year year_;
    Month month_ = 1;
    Day day_ = 1;

public:
    Date(int y) : year_{y} {}
    Date(Year y, Month m, Day d) : year_{y}, month_{m}, day_{d} {}

    ostream& print(ostream& os) ;
};

ostream& operator<<(ostream& os, Date d) {
    return d.print(os);
}

ostream& Date::print(std::ostream &os) {
    return os << format("{}-{:02}-{:02}", year_.value(), month_.value(), day_.value());
}

Date easter(Year year) {
    const int y = year.value();
     int a = y/100*1483 - y/400*2225 + 2613;
     int b = (y%19*3510 + a/25*319)/330%29;
     b = 148 - b - (y*5/4 + a - b) % 7;

     return Date{Year{y}, Month{b/31}, Day{b%31 + 1}};
}


int main(int argc, const char *argv[]) {
    int number {};
    if(argc > 1) {
        number = std::stoi(argv[1]);
    } else {
        std::cout << "Year? "; std::cin >> number;
    }

    Date date = easter(number);

    std::cout << "Easter: " << date << "\n";
}