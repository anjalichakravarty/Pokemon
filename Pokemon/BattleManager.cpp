#include <iostream>
#include "BattleManager.h"
#include "Player.h"
#include "Pokemon.h"
#include "Utility.h"
using namespace std;

void BattleManager::startBattle(Player &player, Pokemon &wildPokemon){
    battleState.playerPokemon = player.chosenPokemon;
    battleState.wildPokemon = wildPokemon;
    battleState.playerTurn = true;
    battleState.battleOngoing = true;

    cout << "A wild " << wildPokemon.name << " has appeared!\n";
    battle();
}

void BattleManager::battle(){

    while (battleState.battleOngoing)
    {
        if (battleState.playerTurn)
        {
            battleState.playerPokemon.attack(battleState.wildPokemon);
        }
        else 
        {
            battleState.wildPokemon.attack(battleState.playerPokemon);
        }

        updateBattleState();
        battleState.playerTurn = !battleState.playerTurn;
        //pause to show the result of each turn
        Utility::waitForEnter();
    }

    // Determine and display the outcome of the battle
    handleBattleOutcome();
    
}

void BattleManager::updateBattleState()
{
    if (battleState.playerPokemon.isFainted())
    {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon.isFainted()) 
    {
        battleState.battleOngoing = false;
    }
}

void BattleManager::handleBattleOutcome()
{
    if (battleState.playerPokemon.isFainted())
    {
        cout << battleState.playerPokemon.name << " has fainted! You lose the battle.\n";
    }
    else 
    {
        cout << "You defeated the wild " << battleState.wildPokemon.name << "!\n";
    }
}

