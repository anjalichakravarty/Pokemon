// Charmander.cpp
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35){}

        void Charmander::flameBurst(Pokemon* target)
        {
            cout << name << " used Flame Burst!\n";
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

        void Charmander::attack(Pokemon* target)
        {
            flameBurst(target);
        }
    }
}