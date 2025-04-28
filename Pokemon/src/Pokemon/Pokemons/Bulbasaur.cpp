//Bulbasaur.cpp
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 100, 35){}

        void Bulbasaur::vineWhip(Pokemon* target)
        {
            cout << name << " uses vine whip!\n";
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

        void Bulbasaur::attack(Pokemon* target)
        {
            vineWhip(target);
        }
    }
}