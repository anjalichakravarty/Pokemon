#include "Game.h"
#include "Player.h"
#include "ProfessorOak.h"
#include <iostream>
#include <limits>
#include <string> 



using namespace std;



int main() {

    //Creating objects of Professor Oak, Pokemon and Player
    ProfessorOak professor("Professor Oak");
    Player player;

    //Greet the player and offerPokemonChoices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    //Explain the main quest
    professor.explainMainQuest(player);

    //Start the main game loop
    Game game;
    game.gameLoop(player);

    return 0;
}
