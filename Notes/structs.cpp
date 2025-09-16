//NL Structures

//What are structures?
//A structure is a custom data type. It is an abstract data type, aka ADT.

//How do you build a structure?
//struct Movie {
//    string title;
//    int releaseYear = 0;
//    bool isPopular = true;

//};

//What can be held in a structure?
// Properties for objects based on the structure.

//How do you access the information in a structure?
//Using object_name.propertyName

//How do you overload an operator?
//


#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Date {
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isPopular = true;
    bool == (const Movie& movie){
        if (title == movie.title && 
            releaseDate.year == movie.releaseDate.year &&
            releaseDate.month == movie.releaseDate.month &&
            releaseDate.day == movie.releaseDate.day &&
            isPopular == movie.isPopular
        ) {
        return true;
    }else{
        return false;
    }
    }
};

struct Customer {
    string name;
    int id;
    string email;
};

int main(){
    vector<Movie> movies;

    Customer jonas;

    jonas.name = "Jonas";
    jonas.id = 2224410;
    jonas.email = "jonas.fairchild@ucas-edu.net";

    cout << "Customer: " << jonas.name << endl;
    cout << "Customer's ID: " << jonas.id << endl;
    cout << "Customer's email: " << jonas.email << endl;


    movies.push_back({"Terminator", {1984, 6, 1}});
    movies.push_back({"Terminator 2", 1987});

    Movie terminator = {"Terminator", {1984, 6, 1}};
    Movie terminator_two = {"Terminator 2", {1987}};


    //auto [title, releaseYear, isPopular] {terminator};
    for (auto movie: movies) {
        auto [title, releaseDate, isPopular] {movie};
        cout << "Movie Title: " << title << endl;
        cout << "Movie Year: " << releaseDate.year << endl;
        cout << "Popular? " << isPopular << endl;
    }
    cout << terminator == terminator_two << endl;
}