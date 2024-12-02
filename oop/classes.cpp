//
// Created by Felix Vargas Jr on 11/19/24.
//
#include <iostream>
#include <string>
#include <format>

using std::string; using std::format; using std::cout; using std::ostream;
using sview = std::string_view;

// side note that a struct starts by being public, whereas a class starts by being private.

struct Person { // defines a type

private: // everything from here cannot be accessed externally
    string name_;
    int age_;
    string city_;
    void print2(); // function as a method type
    string greeting();
    void print3(std::ostream &print);
    Person();
    // you can overload a constructot w/ different parameter combinations
    Person(sview s, int a, sview c) : name_(s), age_(a), city_(c) {};


public: // everything from here can be used externally
    Person(sview n, sview c, int a)
        : name_{n}, city_{c}, age_{a} {}
        void print();
};;



struct Person2 {
    string name;
    ostream& print(ostream& os){ // do no do thus unless it is a short function
        return os << this->name << std::endl;
        // functions are quick when being called as an inline but can make it larger
        // it is only best to inline methods that are simple and are called frequently
    };
};

// 'this' always refers to the field belonging to the called object
// 'this' is always a param even if it is not appearing so (Type* this)
// within the method the compiler automatically tries to see if an identifier belongs tp *this. Thus, you can implement greeting() more clearly.
string Person::greeting() {
    return format("{} ({}) from {}\n", this->name_, this->age_, this->city_);

}

inline void print(Person p) {
  cout << format("{} ({}) from {}\n", p.name_, p.age_, p.city_);
};

// method type function
void Person::print2() { // method name is extended by Person::
    cout << format("{} ({}) from {}\n", name_, age_, city_); // name_ is sufficient due to the method type

}

void Person::print3(std::ostream& print) {
    print << format("{} {}\n", name_, city_);
};

//Person create (string name, int age, string city){
//    Person result {name, age, city};
//    return result;
//}

// instead of passing a variable
//Person create2(string name, int age, string city) {
//   return {name, age, city}; // the compiler knows from the return type that you want to create a Person.
//}

// there can be times when you need to specify the type
//auto create3(string name, int age, string city) {
//    return Person(name, age, city); // would not work if you dont specify the Person type
//}


// There may be a time where this -> for attribute access in a method namely, when two or more identical identifiers conflict
int value = 9; // access in a method by using '::value'

struct Number {
    int value = 3; // this->value will be how to reference this variable
    void set(int value){ // you can access this by 'value'
      this->value = value + ::value; // 'this->value' refers to the value in the data field of Number.
      // 'value' refers to the param in the method, and '::value' refers to the global variable.
    };
};

int main() {
//    Person john = create("John", 32, "Boston");
//    print(john);
//
//    print(create2("Kirk", 99, "kansas"));

    //calling the method for a variable of the type -> another way to call the function method that is in the struct.
   // john.print2();

    // Person anna = create("Anna", 74, "Boston");
   // anna.greeting();


    std::vector<Person> people{}; // intiially empty
    // people.resize(5); // expand to 5 empty elements

    cout << people[3].city_ << "\n"; // output

    return 0;
}
