//Bulbasaur.cpp
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Move.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Bulbasaur::Bulbasaur() : 
        Pokemon("Bulbasaur", PokemonType::GRASS, 100, {
            Move("VINE WHIP", 25),
            Move("TACKLE", 10)
        }){}

        void Bulbasaur::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "VINE WHIP")
            {
                //Chance for a second hit(50% chance)
                int secondHitChance = rand() % 2;

                if (secondHitChance == 1)
                {
                    Pokemon::attack(selectedMove, target);
                    cout << name << " hits again with a second " << selectedMove.name << "!\n";
                }
                else
                {
                    cout << target->name << " dodged the second hit!\n";
                }
            }
        }
    }
}