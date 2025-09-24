//NL Pokemon

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Start {
    Smithijon,
    Pyro,
    Cod,
    Otto,
    Dracula
};

enum Main {
    Fight,
    Search,
    Heal,
    Exit
};

//An array of arrays, each smaller array has 2 parts
//Attacking type, Defending Type


string names[10] = {"Otto Von Bismark","George Washington","Andrew Jackson","Chester A. Arthur","President Spider-man","Ms. Larose","Voncent","Dodo Bird","J O N A S","Archduke Franz Ferdinand"};
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
    return my_num;
}

void catching(vector<Pokemon> owned, vector<Pokemon> species) {
    Pokemon opponent = species[random(5)];
    int choice;
    cout << "You encountered a " << opponent.name << "!\n What would you like to do?";
    cout << "1: Catch it\n";
    cout << "2: Run away";
    cin >> choice;
    if (choice == '1') {   
        cout << "You threw a POKEDODECAHEDRON!\n";
        if (random(5) == 0) {
            cout << "You caught it!\n";
            owned.push_back(opponent);
            return;
        }
        else {
            cout << opponent.name << " ran away! :(\n";
            return;
        }
    }else {
        cout << "You ran away!\n";
        return;
    }
}

void battle(vector<Pokemon> owned, vector<Pokemon> species) {
    Pokemon opponent = species[random(5)];
    string trainer = names[random(10)];
    cout << "You encountered " << trainer << "!\n << They send out a " << opponent.name << "!\n";
    int choice;
    CREATE IF HERE
}


int main() {
    vector<Pokemon> species = make_pokemon(); 
    vector<Pokemon> owned;
    int start_choice;
    while (true) {
        cout << "Hello! welcome to POKE MEN.\n";
        cout << "You need to select a starter pokemon!\n";
        cout << "1: Smithijon, the Normal type Clerk POKEMAN.\n A POKEMAN that works at a grocery store.\n He has exceptional health, but subpar damage capabilities.\n";
        cout << "2: Pyro, the Fire type TF2 POKEMAN.\n A POKEMAN with a flamethrower who excels at dealing damage.\n";
        cout << "3: Cod, the Water type Fish POKEMAN.\n A POKEMAN who has been vital to the history of the world.\n Capable of utilizing the entire Medieval Saltcod Industry.\n";
        cout << "4: Otto Von Bismark, the Ancient type Historical Figure POKEMAN.\n A POKEMAN who once unified Germany.\n Capable of utilizing beef.\n";
        cout << "5: 4D Dracula.\n Dracula.\n";
        cin >> start_choice;
        if (start_choice == Start::Smithijon) {
            owned.push_back(species[0]);
        }else if (start_choice == Start::Pyro) {
            owned.push_back(species[1]);
        }else if (start_choice == Start::Cod) {
            owned.push_back(species[2]);
        }else if (start_choice == Start::Otto) {
            owned.push_back(species[3]);
        }else if (start_choice == Start::Dracula) {
            owned.push_back(species[4]);
        }else {
            cout << "Please enter a valid number.\n";
            continue;
        }
    }
    cout << "Yay! " << owned[0].name << " has joined your party!\n";
    int choice;
    while (true) {
        cout << "What would you like to do?";
        cout << "1: Fight";
        cout << "2: Search";
        cout << "3: Heal";
        cout << "4: Exit";
        cin >> choice;
        if (choice == Main::Fight) {
            
        } else if (choice == Main::Search) {


        } else if (choice == Main::Heal) {
            for (Pokemon i : owned) {
                i.cur_hp = i.max_hp;
                cout << i.name << " has been healed to " << i.cur_hp << "!\n";
            }
            continue;
        } else if (choice == Main::Exit) { 
            cout << "Bye!\n";
            return 0;
        }else {
            cout << "Please enter a valid number input.\n";
            continue;
        }
    }
    return 0;
}