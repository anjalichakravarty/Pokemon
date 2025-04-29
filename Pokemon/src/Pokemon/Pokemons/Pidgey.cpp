#include "../../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Move.h"
#include "../../../include/Battle/BattleManager.h"

#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;
        using namespace N_Utility;
        using namespace N_Battle;

        Pidgey::Pidgey() : 
        Pokemon("Pidgey", PokemonType::NORMAL, 100, {
            Move("GUST", 15),
            Move("TACKLE", 10)
        }){}

        void Pidgey::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "GUST")
            {
                //20% chance to blow the opponent away
                if (rand() % 100 < 20)
                {
                    cout << "... and blew the opponent away!\n";
                    N_Battle::BattleManager::stopBattle();
                    N_Utility::Utility::waitForEnter();
                }
            }
        }
    }
}