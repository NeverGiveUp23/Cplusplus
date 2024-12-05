//
// Created by Felix Vargas Jr on 12/5/24.
//


#include <iostream>


void getWeeklySteps(int* steps, char* days, int num_days);
double get_total(int* steps, int num_days);


int main() {
    const int num_days = 7; // setting number of days in the weeks, always 7 so will make const
    char daysOfWeek[] = "MTWTFSS"; // char array of the week

    int steps[num_days]{0}; // arrays with one element for each days of the week. initialized to 0;


    std::cout << "Welcome to the Step Counter!\n"
    << "Please enter your steps for the week" << std::endl;

    getWeeklySteps(steps, daysOfWeek, num_days);
    double total = get_total(steps, num_days);
    double avg = total / num_days;

    std::cout << "Total steps for the week: " << total << "\n" << "Average Daily steps: "  << avg << "\n";



}


void getWeeklySteps(int* steps, char* days, int num_days){
    if (steps == nullptr || days == nullptr) return;

    for(int i = 0; i < num_days; i++){
        std::cout << days[i] << ": ";
        std::cin >> steps[i];
    }

    std::cout << '\n';
}

double get_total(int* steps, int num_days){
    double total = 0;
    if(steps != nullptr) {
        for(int i = 0; i < num_days; i++){
            total += steps[i];
        }
    }

    return total;
}


