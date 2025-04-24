// Player.h

#include <string>
#include "Pokemon.h"
using namespace std;

namespace N_Character {
    namespace N_Player {

        class Player {
            public:
                string name;
                N_Pokemon::Pokemon chosenPokemon;

                //Default constructor
                Player();

                //Parametrised constructor
                Player(string p_name, N_Pokemon::Pokemon p_chosenPokemon);

                //Method to choose Pokemon
                void choosePokemon(int choice);
        };
    }
}