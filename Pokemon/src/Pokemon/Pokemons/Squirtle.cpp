// Squirtle.cpp
#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 35){}

        void Squirtle::waterSplash(Pokemon* target)
        {
            cout << name << " used Water Splash!\n";
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

        void Squirtle::attack(Pokemon* target)
        {
            waterSplash(target);
        }
    }
}