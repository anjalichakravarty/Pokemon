#include "../../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35){}

        void Pidgey::wingAttack(Pokemon* target)
        {
            cout << name << " uses Wind Attack!\n";
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

        void Pidgey::attack(Pokemon* target)
        {
            wingAttack(target);
        }
    }
}