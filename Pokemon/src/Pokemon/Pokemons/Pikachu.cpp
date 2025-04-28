#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;
        using namespace N_Utility;

        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 15) {}

        void Pikachu::thunderShock(Pokemon* target){
            cout << name << " used Thunder Shock!\n";
            N_Utility::Utility::waitForEnter();

            cout << "...\n";
            N_Utility::Utility::waitForEnter();

            target->takeDamage(attackPower);

            if (target->isFainted())
            {
                cout << target->name << " fainted!\n"; 
            }
            else
            {
                cout << target->name << " has " << target->health << " HP left.\n";
            }
        }

        void Pikachu::attack(Pokemon* target)
        {
            thunderShock(target);
        }
    }
}