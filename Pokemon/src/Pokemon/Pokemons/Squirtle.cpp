// Squirtle.cpp
#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Move.h"

#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Squirtle::Squirtle() : 
        Pokemon("Squirtle", PokemonType::WATER, 100, {
            Move("WATER GUN", 20),
            Move("TACKLE", 10),
            Move("RAPID SPIN", 5)
        }){}

        void Squirtle::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if(selectedMove.name == "RAPID SPIN")
            {
                // Random number of hits between 2 and 5
                int hits = (rand() % 4) + 2;

                // Split damage across hits
                for (int i = 0; i < hits; i++)
                {
                    Pokemon::attack(selectedMove, target);
                }

                cout << "...and hit " << hits << " times!\n";
            }
        }
    }
}