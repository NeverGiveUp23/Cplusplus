//
// Created by Felix Vargas Jr on 12/6/24.
//
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


using namespace std;

class Movie {
private:
    string title;
    int year;

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
    this->title = movie_title;
}

string Movie::get_title() {
    return title;
}

void Movie::set_year(int movie_year) {
    if(movie_year < 1900)
        throw invalid_argument("Year must be greater than 1900 or later.");

    this->year = movie_year;
};

int Movie::get_year() {
    return year;
}


bool Movie::equals(const Movie& to_compare) {
    return (title == to_compare.title && year == to_compare.year);
}


int main() {
    vector<Movie> movies;
    char another = 'y';
    int count = 0;


    while(tolower(another) == 'y'){
        Movie movie;

        string title;
        cout << "Title: ";
        getline(cin, title);
        movie.set_title(title);

        int year;
        cout << "Year: ";
        cin >> year;
        try {
            movie.set_year(year);
        } catch (const invalid_argument& e){
            cout << e.what() << "\n";
            cout << "Exiting program... \n";
            return 0;
        }

        movies.push_back(movie);



        cout << "\nEnter another movie? (y/n): ";
        count++;
        cin >> another;
        cin.ignore();
        cout << endl;

    }
    if(count >= 2){
        cout << "wow you love movies!\n\n";
    }

    const int w = 10;
    cout << left << setw(w * 3) << "Title" << right << setw(w) << "Year" << endl;

    for (Movie movie : movies){
        cout << left << setw(w * 3) << movie.get_title()  << " " << right << setw(w) << movie.get_year() << endl;
    }

    cout << "\nTotal Movies: " << count << endl;

//
//    cout << "Enter a movie: " << endl;
//    Movie movie;
//    movie.set_title("Joking");
//    movie.set_year(1999);
//
//    cout << "Title: " << movie.get_title() << endl;
//    cout << "Year: " << movie.get_year() << endl;

    return 0;
}