//NL Pokemon

#include <vector>
#include <iostream>
using namespace std;

//An array of arrays, each smaller array has 2 parts
//Attacking type, Defending Type

REPLACE GRASS WITH ANCIENT
string type_strong[4][2] = {{"Fire","Grass"},{"Water","Fire"},{"Grass","Water"},{"Electric","Water"}};
string type_weak[8][2] = {{"Fire","Fire"},{"Fire","Water"},{"Water","Water"},{"Water","Grass"},{"Grass","Fire"},{"Grass","Grass"},{"Electric","Grass"},{"Electric","Electric"}};

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
    Pokemon smithijon = {"Smithijon", 250, 250, smith_attacks, 1, "Normal"};

    vector<Attack> pyro_attacks;
    pyro_attacks.push_back({"Flamethrower", 25, "Fire"});
    pyro_attacks.push_back({"Shotgun", 30, "Normal"});
    pyro_attacks.push_back({"Backscratch", 40, "Normal"});
    Pokemon pyro = {"Pyro", 175, 175, pyro_attacks, 1, "Fire"};

    vector<Attack> cod_attacks;
    cod_attacks.push_back({"Flop", 0, "Water"});
    cod_attacks.push_back({"Medieval Saltcod Industry", 50, "Water"});
    cod_attacks.push_back({"Slap", 20, "Normal"});
    Pokemon cod = {"Smithijon", 150, 150, cod_attacks, 1, "Water"};

    vector<Attack> otto_attacks;
    otto_attacks.push_back({"Armed forces", 75, "Ancient"});
    otto_attacks.push_back({"Slap", 20, "Normal"});
    otto_attacks.push_back({"90 Year old Beef", 40, "Ancient"});
    Pokemon otto_von_bismark = {"Otto Von Bismark", 200, 200, smith_attacks, 1, "Ancient"};

    FINISH THIS ONE
    vector<Attack> smith_attacks;
    smith_attacks.push_back({"Pay Cut", 1, "Normal"});
    smith_attacks.push_back({"Cart Bash", 5, "Normal"});
    smith_attacks.push_back({"Flamethrower", 25, "Fire"});
    Pokemon smithijon = {"Smithijon", 200, 200, smith_attacks, 1, "Electric"};


}