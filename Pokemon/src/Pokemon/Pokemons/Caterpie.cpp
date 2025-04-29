#include "../../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Move.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;

        Caterpie::Caterpie() : 
        Pokemon("Caterpie", PokemonType::BUG, 100, {
            Move("TACKLE", 10),
            Move("STRING SHOT", 5),
            Move("STICKY WEB", 10)
        }){}

        void Caterpie::attack(Move selecetedMove, Pokemon* target)
        {
            Pokemon::attack(selecetedMove, target);

            if(selecetedMove.name == "STICKY WEB")
            {
                //Reduce the target's next attack damage (for simplicity reducing by a fixed value)
                int reducedDamage = 5;
                target->reduceAttackPower(reducedDamage);
                cout << target->name << "'s next attack will be reduced by " << reducedDamage << " damage!\n";
            }
        }
    }
}