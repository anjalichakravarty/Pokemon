// Player.h

#include <string>
#include "../../Pokemon/Pokemon.h"
using namespace std;

namespace N_Character {
    namespace N_Player {

        using namespace N_Pokemon;

        class Player {
            public:
                string name;
                N_Pokemon::Pokemon* chosenPokemon;

                //Default constructor
                Player();

                //Parametrised constructor
                Player(string p_name);

                //Method to choose Pokemon
                void choosePokemon(int choice);
        };
    }
}