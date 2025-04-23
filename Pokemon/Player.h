// Player.h

#include <string>
#include "Pokemon.h"

using namespace std;


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