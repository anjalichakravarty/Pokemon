#include <iostream>
#include <string>
#include "Player/Player.h"

using namespace std;

class Player;

namespace N_Character {
    
    using namespace N_Player;
    class ProfessorOak{
        public:
            string name;

            ProfessorOak(string p_name); //Parametrised Constructor

            //Method to greet the player
            void greetPlayer(Player &player);

            //Method to ask the player to choose a Pokemon
            void offerPokemonChoices(Player &player);

            //Method to explain main quest
            void explainMainQuest(Player &player);

    };
}