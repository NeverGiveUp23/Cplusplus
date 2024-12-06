//
// Created by Felix Vargas Jr on 12/6/24.
//
#include <iostream>
using namespace std;

class Movie {
private:
    string title = "";
    int year = 0;

public:
    void set_title(string);
    string get_title();
    void set_year(int);
    int get_year();
    bool equals(const Movie&);
};

// member function definitions

void Movie::set_title(std::string movie_title) {
    if(movie_title.empty())
        throw invalid_argument("You must enter the movie title");
    title = movie_title;
}

string Movie::get_title() {
    return title;
}

void Movie::set_year(int movie_year) {
    if(movie_year < 1900)
        throw invalid_argument("Year must be greater than 1900 or later.");

    year = movie_year;
};

int Movie::get_year() {
    return year;
}


bool Movie::equals(const Movie& to_compare) {
    return (title == to_compare.title && year == to_compare.year);
}


int main() {

    Movie movie;
    movie.set_title("Joking");
    movie.set_year(1999);

    cout << "Title: " << movie.get_title() << endl;
    cout << "Year: " << movie.get_year() << endl;

    return 0;
}