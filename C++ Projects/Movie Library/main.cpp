#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string file;

struct Movie{
    string title;
    string director;
    int year;
    string genre;
    string rating;
};

bool operator!=(const Movie& first, const Movie& second) {
    return (first.title != second.title ||
            first.director != second.director || 
            first.year != second.year ||
            first.genre != second.genre ||
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
            film.director = str;

            getline(iss, str, ',');
            film.year = stoi(str);

            getline(iss, str, ',');
            film.genre = str;

            getline(iss, str);
            film.rating = str;

            movies.push_back(film);
        }
    ifile.close();
    }
    return movies;
}

void removeMovie(Movie film, vector<Movie> &movies ) {
    ofstream ofile;
    ofile.open(file);
    ofile << "Movie Name,Director,Year,Genre,Rating\n";
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
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (true) {
        cout << "Please enter the movie title.\n";
        getline(cin, film.title);
        if (cin.fail()) {
            cout << "Invalid input.\n";
            continue;
        }
        cout << "Please enter the director.\n";
        getline(cin, film.director);
        if (cin.fail()) {
            cout << "Invalid input.\n";
            continue;
        }
        cout << "Please enter the movie's release year.\n";
        string str_year;
        getline(cin,str_year);
        film.year = atoi(str_year.c_str());
        if (cin.fail() || film.year <= 0) {
            cout << "Invalid input.\n";
            continue;
        }
        cout << "Please enter the movie's genre.\n";
        cin >> film.genre;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            continue;
        }
        cout << "Please enter the movie's rating.\n";
        cin >> film.rating;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            continue;
        }
        return film;
    }
}

void searchMovies(vector<Movie> &movies) {
    vector<Movie> searchedMovies;
    string searchBy;
    while (true) {
        cout << "What would you like to search by?\n1: Title\n2: Director\n3: Year\n4: Genre\n5: Rating\n6: Exit" << endl;
        cin >> searchBy;
    if (cin.fail()) {
        cout << "Invalid input.\n";
        continue;
    }else if (searchBy == "1") {
        string title;
        cout << "Please enter the movie title.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, title);
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        for (Movie i : movies) {
            int idx = i.title.find(title);
            //Checks if the index actually exists
            if (idx != string::npos) {
                searchedMovies.push_back(i);
            }
        }
    }else if (searchBy == "2") {
        string director;
        cout << "Please enter the movie director.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, director);
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        for (Movie i : movies) {
            cout << i.director << " in " << director << "?\n";
            int idx = i.director.find(director);
            if (idx != string::npos) {
                searchedMovies.push_back(i);
            }
        }
    }else if (searchBy == "3") {
        int year;
        cout << "Please enter the movie's release year.\n";
        cin >> year;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        for (Movie i : movies) {
            if (i.year == year) {
                searchedMovies.push_back(i);
            }
        }
    }else if (searchBy == "4") {
        string genre;
        cout << "Please enter the movie genre.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, genre);
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        for (Movie i : movies) {
            int idx = i.genre.find(genre);
            if (idx != string::npos) {
                searchedMovies.push_back(i);
            }
        }
    }else if (searchBy == "5") {
        string rating;
        cout << "Please enter the movie's age rating.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, rating);
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        for (Movie i : movies) {
            int idx = i.rating.find(rating);
            if (idx != string::npos) {
                searchedMovies.push_back(i);
            }
        }
    }else if (searchBy == "6") {
        return;
    }else {
        cout << "Invalid input.\n";
    }
    cout << "Found " << size(searchedMovies) << " movies\n";
    if (size(searchedMovies) == 0) {
        cout << "Sorry, I couldn't find anything. Please check your spelling and capitalization.\n";
        continue;
    }
    for (Movie i : searchedMovies) {
        cout << "Title: " << i.title << "\nDirected by: " << i.director << "\nRelease Year: " << i.year << "\nGenre: " << i.genre << "\nAge Rating: " << i.rating << endl;
    }
    return;
    }
}

int main() {
    vector<Movie> movies;
    while (true) {
        cout << "Welcome to your personal movie library!\n";
        cout << "Please enter the name of your csv file, including .csv. For example, \"movies.csv\".\n";
        cin >> file;
        ifstream ifile;
        ifile.open(file);
        if (!ifile.is_open()) {
            cout << "Could not open provided file. Please try again.\n";
            ifile.close();
            continue;
        }else {
            ifile.close();
            break;
        }
    }
    movies = readMovie();
    while (true) {
        string choice;
        cout << "What would you like to do?\n1: View all movies\n2: Search movies\n3: Add a movie\n4: Delete a movie\n5: Exit\n";
        cin >> choice;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }else if(choice == "1") {
            for (Movie i : movies) {
                cout << "Title: " << i.title << "\nDirected by: " << i.director << "\nRelease Year: " << i.year << "\nGenre: " << i.genre << "\nAge Rating: " << i.rating << endl;
            }
        }else if (choice == "2") {
            searchMovies(movies);
        }else if (choice == "3") {
            writeMovie(movieInput());
        }else if (choice == "4") {
            removeMovie(movieInput(), movies);
        }else if (choice == "5") {
            cout << "Goodbye!\n";
        }else {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
    }
}