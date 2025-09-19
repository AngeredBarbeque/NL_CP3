//NL User Structure

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct User {
    string username;
    string password;
    bool admin;
};

bool operator==(const User& first, const User& second){
        return (
            first.username == second.username &&
            first.password == second.password &&
            first.admin == second.admin
        );
    }

ostream& operator << (ostream& stream, User& user){
    stream << user.username;
    return stream;
}

vector<User> make_list () {
    vector<User> users;
    User luke;
    luke.username = "luke.murdock";
    luke.password = "nick.larsen";
    luke.admin = true;
    User darius;
    darius.username = "imagineExisting";
    darius.password = "HE";
    darius.admin = true;
    User vincent;
    vincent.username = "Glorb";
    vincent.password = "12345";
    vincent.admin = true;
    User cecily;
    cecily.username = "Cinnamon";
    cecily.password = "Worcestshire but backwards";
    cecily.admin = false;
    User alex;
    alex.username = "Aeiros";
    alex.password = "1A3C2B4D1";
    alex.admin = false;
    User tate;
    tate.username = "techmaster351";
    tate.password = "5";
    tate.admin = false;
    User jonas;
    jonas.username = "I Don't know";
    jonas.password = "Oh Dang";
    jonas.admin = false;
    User nick;
    nick.username = "luke.murdock";
    nick.password = "nick.larsen";
    nick.admin = false;
    User fleshboy;
    fleshboy.username = "luke.murdock";
    fleshboy.password = "nick.larsen";
    fleshboy.admin = false;
    User beansprout;
    beansprout.username = "luke.murdock";
    beansprout.password = "nick.larsen";
    beansprout.admin = false;
    users.push_back(luke);
    users.push_back(darius);
    users.push_back(vincent);
    users.push_back(cecily);
    users.push_back(alex);
    users.push_back(tate);
    users.push_back(jonas);
    users.push_back(nick);
    users.push_back(fleshboy);
    users.push_back(beansprout);
    return users;
    
}

bool check (vector<User>& users, User& new_user) {
    for (auto user: users) {
        if (user == new_user) {
            return true;
        }
    }
    return false;
}

int main() {
    cout << "Welcome!" << endl;
    while (true) {
        cout << "Would you like to continue? y/n:";
        string confirm;
        cin >> confirm;
        cin.ignore();
        if (confirm != "y") {
            cout << "Goodbye!";
            exit(0);
        }
        string entered_username;
        string entered_password;
        string entered_admin;
        vector<User> users = make_list();
        cout << "Please enter your username!" << endl << "Username: ";
        cin >> entered_username;
        cin.ignore();
        cout << "Password: ";
        cin >> entered_password;
        cin.ignore();
        cout << "Are you an admin? Y or N?: ";
        cin >> entered_admin;
        cin.ignore();
        entered_admin = toupper(entered_admin[0]);
        User new_user;
        new_user.username = entered_username;
        new_user.password = entered_password;
        cout << "Username: " << new_user.username << endl;
        cout << "Password: " << new_user.password << endl;
        if (entered_admin == "Y") {
            cout << "Admin: Yes" << endl;
            new_user.admin = true;
        } else {
            cout << "Admin: No" << endl;
            new_user.admin = false;
        }

        if (check (users, new_user)) {
            cout << "Already exists." << endl;
        }else {
            cout << "Welcome new user!" << endl;
        }
    }
}
