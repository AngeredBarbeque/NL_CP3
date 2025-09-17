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

User make_list () {
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
    cecily.password = "Worchestshire but backwards";
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
    User users[10] = {luke,darius,vincent,cecily,alex,tate,jonas,nick,fleshboy,beansprout}
}
