#include "../../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10){}

        void Caterpie::bugBite(Pokemon* target)
        {
            cout << name << " used Bug bite!\n";
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

        void Caterpie::attack(Pokemon* target)
        {
            bugBite(target);
        }
    }
}