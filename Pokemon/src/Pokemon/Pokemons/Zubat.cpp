#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}

        void Zubat::supersonic(Pokemon* target)
        {
            cout << name << " used Supersonic!\n";
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

        void Zubat::attack(Pokemon* target)
        {
            supersonic(target);
        }
    }
}