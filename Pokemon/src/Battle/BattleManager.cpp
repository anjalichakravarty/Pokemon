#include <iostream>
#include "../../include/Battle/BattleManager.h"
#include "../../include/Character/Player/Player.h"
#include "../../include/Pokemon/Pokemon.h"
#include "../../include/Utility/Utility.h"
using namespace std;

namespace N_Battle{

    using namespace N_Utility;
    using namespace N_Character::N_Player;
    using namespace N_Pokemon;

    BattleState BattleManager::battleState;

    void BattleManager::startBattle(N_Character::N_Player::Player* player, Pokemon* wildPokemon){
        battleState.playerPokemon = player->chosenPokemon;
        battleState.wildPokemon = wildPokemon;
        battleState.playerTurn = true;
        battleState.battleOngoing = true;

        cout << "A wild " << wildPokemon->name << " has appeared!\n";
        battle();
    }

    void BattleManager::stopBattle()
    {
        battleState.battleOngoing = false;
    }

    void BattleManager::battle(){

        while (battleState.battleOngoing)
        {
            if (battleState.playerTurn)
            {
                battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
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
}

