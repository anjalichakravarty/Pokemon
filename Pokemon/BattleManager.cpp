#include <iostream>
#include "BattleManager.h"
#include "Player.h"
#include "Pokemon.h"
#include "Utility.h"
using namespace std;

void BattleManager::startBattle(Player &player, Pokemon &wildPokemon){
    cout << "A wild " << wildPokemon.name << " has appeared!\n";
    battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon &playerPokemon, Pokemon &wildPokemon){

    while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
    {
        playerPokemon.attack(wildPokemon); //Player attacks first

        //Check to see if wild pokemon is fainted
        if(!wildPokemon.isFainted())
        {
            wildPokemon.attack(playerPokemon); //Wild Pokemon attacks back
        }

        //pause to show the result of each turn
        Utility::waitForEnter();
    }

    // Determine and display the outcome of the battle
    handleBattleOutcome(playerPokemon, playerPokemon.isFainted());
    
}

void BattleManager::handleBattleOutcome(Player &player, bool playerWon)
{
    if (playerWon)
    {
        cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokemon's health.\n";
    }
    else 
    {
        cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        cout << "Game Over. \n";
    }
}

