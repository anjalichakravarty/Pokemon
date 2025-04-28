#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Move.h"

#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Zubat::Zubat() : 
        Pokemon("Zubat", PokemonType::POISON, 100, {
            Move("BITE", 18),
            Move("LEECH LIFE", 10)
        }) {}


        void Zubat::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "LEECH LIFE")
            {
                // Restore 50% of the damage dealt
                this->health += selectedMove.power * 0.5;

                // Ensure health does not exceed maxHealth
                if (this->health > this->maxHealth)
                {
                    this->health = this->maxHealth;
                }

                cout << "...and regained health!\n";
            }
        }
    }
}