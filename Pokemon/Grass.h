//Grass.h
#include <string>
#include <vector>
using namespace std;

class Pokemon;

struct Grass
{
    string environmentType; //Example: "Forest", "Cave", "Riverbank"
    vector<Pokemon> wildPokemonList; //List of wild Pokemon that live in this grass
    int encounterRate; //Likelyhood of encountering a wild Pokemon, out of 100
};
