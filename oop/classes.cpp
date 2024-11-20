//
// Created by Felix Vargas Jr on 11/19/24.
//
#include <iostream>
#include <string>
#include <format>

using std::string; using std::format; using std::cout;


struct Person { // defines a type
    string name_;
    int age_;
    string city_;
    void print2(); // function as a method type
    string greeting();
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

Person create (string name, int age, string city){
    Person result {name, age, city};
    return result;
}

// instead of passing a variable
Person create2(string name, int age, string city) {
   return {name, age, city}; // the compiler knows from the return type that you want to create a Person.
}

// there can be times when you need to specify the type
auto create3(string name, int age, string city) {
    return Person(name, age, city); // would not work if you dont specify the Person type
}

int main() {
    Person john = create("John", 32, "Boston");
    print(john);

    print(create2("Kirk", 99, "kansas"));

    //calling the method for a variable of the type -> another way to call the function method that is in the struct.
    john.print2();

    Person anna = create("Anna", 74, "Boston");
    anna.greeting();

    return 0;
}
