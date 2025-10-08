#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

string file = "movies.csv";

struct Movie{
    string title;
    string director;
    int year;
    string genre;
    string rating;
};

bool operator!=(const Movie& first, const Movie& second) {
    return (first.title != second.title && 
            first.director != second.director && 
            first.year != second.year &&
            first.genre != second.genre &&
            first.rating != second.rating);
}

vector<Movie> readMovie() {
    ifstream ifile;
    ifile.open(file);
    vector<Movie> movies;
    string line;
    if (ifile.is_open()) {
        getline(ifile, line);
        while(getline(ifile, line)){
            string str;
            istringstream iss(line);
            Movie film;
            getline(iss, str, ',');
            film.title = str;

            getline(iss, str, ',');
            film.director = stoi(str);

            getline(iss, str, ',');
            film.year = stoi(str);
            getline(iss, str, ',');
            film.genre = stoi(str);
            getline(iss, str);
            film.rating = stoi(str);

            movies.push_back(film);
        }
    ifile.close();
    }
    return movies;
}

void removeMovie(Movie &film, vector<Movie> &movies ) {
    ofstream ofile;
    ofile.open(file);
    for (Movie i : movies) {
        if (i != film) {
            ofile << i.title << ',' << i.director << ',' << i.year << ',' << i.genre << ',' << i.rating << '\n';
        }
    }
}


void writeMovie(Movie film) {
    ofstream ofile;
    ofile.open(file, ios::app);
    ofile << film.title << ',' << film.director << ',' << film.year << ',' << film.genre << ',' << film.rating << '\n';
    ofile.close();
}

Movie movieInput() {
    Movie film;
    while (true) {
        cout << "Please enter the movie title.\n";
        getline(cin, film.title);
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter the director.\n";
        getline(cin, film.director);
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter the movie's release year.\n";
        cin >> film.year;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter the movie's genre.\n";
        cin >> film.genre;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter the movie's rating.\n";
        cin >> film.rating;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return film;
    }
}

Movie searchMovies() {
    string searchBy;
    while (true) {
    cout << "What would you like to search by?\n1: Title\n2: Director\n3: Year\n4: Genre\n5: Rating" << endl;
    cin >> searchBy;
    if (cin.fail()) {
        cout << "Invalid input.\n";
        continue;
    }else if (searchBy == "1") {
        string title;
        cout << "Please enter the movie title.\n";
        cin >> title;
    }else if (searchBy == "2") {
        string director;
        cout << "";
    }else if (searchBy == "3") {

    }else if (searchBy == "4") {

    }else if (searchBy == "5") {

    }else {
        cout << "Invalid input.\n";
    }
    }
}