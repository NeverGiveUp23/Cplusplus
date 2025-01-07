//
// Created by Felix Vargas Jr on 1/6/25.
//
#include <iostream>
#include <string>
using namespace std;

class Point{
public:
    // better syntax to initialize constructor
    Point(double x, double y):x(x), y(y){};

    void setX(double x){
        x = x;
    }

    void setY(double y){
        y = y;
    }

     double getX(){
        return x;
    }

     double getY(){
        return y;
    }

private:
    double x, y;

};

Point operator+ (Point& p1, Point& p2){
    Point sum = {p1.getX() + p2.getX(), p1.getY() + p2.getY()};
    return sum;
}

ostream& operator<< (ostream& out, Point& p){
    out << "( " << p.getX() << ", " << p.getY() << " )";
    return out;
}

class Date {
public:
    //void Date(int m_year = 0, int m_month = 0, int m_day = 0): m_year(m_year), m_month(m_month), m_day(m_day);

    void setName(int name){
        m_month = name;
    }

    void setYear(int year){
        m_year = year;
    }

    void print() {
        cout << m_year << "/" << m_month << "/" << m_day << endl;
    }

private:
    int m_year {};
    int m_month {};
    int m_day {};


};

class Person {
    private:
        string name{};


    public:
        void print(const Person& p){
            cout << name << " is now " << p.name << "\n";
        }

        void setName(string_view name){
            this->name = name;
        }

};

int main(){
//    Point a = {a.setX(4.6), a.setY(7.9)}, b = {b.setX(4.7), b.setY(3.2)}, c;
//
//    cout << "a=" << a << "b=" << b << endl;

    Date today;
    today.setName(01);
    today.setYear(2025);
    today.print();


    Person joe;
    joe.setName("Joe");
    Person kate;
    kate.setName("Kate");

    joe.print(kate);
    return 0;
}