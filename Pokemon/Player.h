// Player.h

#include <string>

using namespace std;

class Pokemon;

class Player {
    public:
        string name;
        Pokemon chosenPokemon;

        //Default constructor
        Player();

        //Parametrised constructor
        Player(string p_name, Pokemon p_chosenPokemon);

        //Method to choose Pokemon
        void choosePokemon(int choice);
};