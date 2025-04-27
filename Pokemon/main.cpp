#include "Main/Game.h"
#include "Character/Player/Player.h"
#include "Pokemon/PokemonChoice.h"
#include "Pokemon/PokemonType.h"
#include "Character/ProfessorOak.h"
#include "Utility/Utility.h"
#include <iostream>
#include <limits>
#include <string> 



using namespace std;
using namespace N_Character;
using namespace N_Player;



int main() {

    //Creating objects of Professor Oak, Pokemon and Player
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    N_Player::Player* player = new N_Player::Player();

    //Greet the player and offerPokemonChoices
    professor->greetPlayer(player);
    professor->offerPokemonChoices(player);

    //Explain the main quest
    professor->explainMainQuest(player);

    //Start the main game loop
    N_Main::Game* game = new N_Main::Game();
    game->gameLoop(player);

    delete(professor);
    delete(player);
    delete(game);

    return 0;
}
