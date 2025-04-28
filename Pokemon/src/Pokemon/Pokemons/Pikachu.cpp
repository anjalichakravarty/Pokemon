#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Move.h"

#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;
        using namespace N_Utility;

        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, {
            Move("THUNDER SHOCK", 20),
            Move("QUICK ATTACK", 10),
            Move("THUNDER BOLT", 80)
        }) {}


        void Pikachu::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if(selectedMove.name == "THUNDER BOLT")
            {
                //80% chance to hit
                if (rand() % 100 < 80)
                {
                    Pokemon::attack(selectedMove, target);
                    cout << "...and it hit successfully!\n";
                }
                else
                {
                    cout << "...but it missed!\n";
                }
            }
            else
            {
                Pokemon::attack(selectedMove, target);
            }
        }
    }
}