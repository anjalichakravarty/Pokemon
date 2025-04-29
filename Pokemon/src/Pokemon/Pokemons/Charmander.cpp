// Charmander.cpp
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Move.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Charmander::Charmander() : 
        Pokemon("Charmander", PokemonType::FIRE, 100, {
            Move("EMBER", 20),
            Move("SCRATCH", 15),
            Move("BLAZING CHARGE", 70)
        }){}

        void Charmander::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "BLAZING CHARGE")
            {
                //Recoil effect: Charmander takes recoil damage
                this->takeDamage(10); //Fixed recoil damage
                cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                N_Utility::Utility::waitForEnter();
            }
        }
    }
}