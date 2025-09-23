//NL Pokemon

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum First {
    Fight,
    Search,
    Heal,
    Exit
};

//An array of arrays, each smaller array has 2 parts
//Attacking type, Defending Type

string type_strong[7][2] = {{"Water","Fire"},{"Fire","Ancient"},{"Ancient","Ancient"},{"Dracula","Normal"},{"Dracula","Water"},{"Dracula","Fire"},{"Dracula","Ancient"}};
string type_weak[8][2] = {{"Fire","Fire"},{"Fire","Water"},{"Water","Water"},{"Water","Ancient"},{"Normal","Dracula"},{"Water","Dracula"},{"Fire","Dracula"},{"Ancient","Dracula"}};

//A struct defining what an attack is
struct Attack {
    string name;
    int damage;
    string type;
};

struct Pokemon {
    string name;
    int max_hp;
    int cur_hp;
    vector<Attack> attacks;
    int level;
    string type;
};

vector<Pokemon> make_pokemon() {
    vector<Attack> smith_attacks;
    smith_attacks.push_back({"Pay Cut", 1, "Normal"});
    smith_attacks.push_back({"Cart Bash", 5, "Normal"});
    smith_attacks.push_back({"Flamethrower", 25, "Fire"});
    Pokemon smithijon = {"Smithijon", 350, 350, smith_attacks, 1, "Normal"};

    vector<Attack> pyro_attacks;
    pyro_attacks.push_back({"Flamethrower", 25, "Fire"});
    pyro_attacks.push_back({"Shotgun", 30, "Normal"});
    pyro_attacks.push_back({"Backscratch", 40, "Normal"});
    Pokemon pyro = {"Pyro", 175, 175, pyro_attacks, 1, "Fire"};

    vector<Attack> cod_attacks;
    cod_attacks.push_back({"Flop", 0, "Water"});
    cod_attacks.push_back({"Medieval Saltcod Industry", 50, "Water"});
    cod_attacks.push_back({"Slap", 20, "Normal"});
    Pokemon cod = {"Cod", 200, 200, cod_attacks, 1, "Water"};

    vector<Attack> otto_attacks;
    otto_attacks.push_back({"Armed forces", 75, "Ancient"});
    otto_attacks.push_back({"Slap", 20, "Normal"});
    otto_attacks.push_back({"90 Year old Beef", 40, "Ancient"});
    Pokemon otto_von_bismark = {"Otto Von Bismark", 200, 200, otto_attacks, 1, "Ancient"};

    vector<Attack> dracula_attacks;
    dracula_attacks.push_back({"Chomp", 150, "Dracula"});
    dracula_attacks.push_back({"Dracula Beam", 200, "Dracula"});
    dracula_attacks.push_back({"True Form", 10000, "Dracula"});
    Pokemon dracula = {"4D Dracula", 500, 500, dracula_attacks, 1, "Dracula"};
    
    vector<Pokemon> species;
    species.push_back(smithijon);
    species.push_back(pyro);
    species.push_back(cod);
    species.push_back(otto_von_bismark);
    species.push_back(dracula);

    return species;
}

int random(int range) {
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand() % range;
    return my_num + 1;
}


int main() {
    cout << "Hello! welcome to POKE MEN.";
    cout << "You need to select a starter pokemon!";
    cout << "1: Smithijon, the Normal type Clerk POKEMAN.\n A POKEMAN that works at a grocery store.\n He has exceptional health, but subpar damage capabilities.\n";
    cout << "2: Pyro, the Fire type TF2 pokemon.\n A POKEMAN with a flamethrower who excels at dealing damage.\n";
    cout << "3: Cod, the Water type Fish POKEMAN.\n A POKEMAN who has been vital to the history of the world.\n Capable of utilizing the entire Medieval Saltcod Industry.\n";
    cout << "4: Otto Von Bismark, the Ancient type Historical Figure POKEMAN.\n A POKEMAN who once unified Germany."




    int choice;
    while (true) {
        cout << "What would you like to do?";
        cout << "1: Fight";
        cout << "2: Search";
        cout << "3: Heal";
        cout << "4: Exit";
        cin >> choice;
        if (choice == First::Fight) {
            

        } else if (choice == First::Fight) {


        } else if (choice == First::Fight) {


        } else {

        };
    }
    return 0;
}