//
// Created by Felix Vargas Jr on 12/5/24.
//

/*
 This is Step Counter 2,

 First we create a class called Counter with a private field defining a private data member vector of steps
 Next, we create public field for our methods and vector of dayOfTheWeek.


this process makes it a lot more readable due to the class structure of the program compared to Counter1

 With the class structure i can access the methods and variables with the this-> pointer
 or by calling Counter class directly and in this case I used (Counter steps).
 */


#include <iostream>
#include <vector>


class Counter {
private:
    std::vector<int> steps;
public:
    std::vector<char> daysOfTheWeek {'M', 'T', 'W', 'T', 'F', 'S', 'S'};
    Counter& getWeeklySteps();
    double getTotal();
};


int main() {
    std::cout << "Welcome to the Steps Counter!" << " Please enter your steps for the week:\n" << std::endl;
    Counter steps;
    double total = steps.getWeeklySteps().getTotal(); // chaining
    double avg = total / steps.daysOfTheWeek.size(); // getting the size of the vector arr

    std::cout << "Total steps for the week: " << total << "\n";
    std::cout << "Average Steps daily: " << avg << std::endl;

}


Counter& Counter::getWeeklySteps() {
    int daily_steps;

    for (char day : this->daysOfTheWeek) {
        std::cout << day << ": ";
        std::cin >> daily_steps;

        this->steps.push_back(daily_steps);
    }

    std::cout << "\n";
    return *this; // return self reference
}


double Counter::getTotal() {
    double total = 0;

    for(int i : this->steps) {
        total += i;
    }

    return total;
}