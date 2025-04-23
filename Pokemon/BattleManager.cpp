#include <iostream>
#include "Player.h"
#include "Pokemon.h"
using namespace std;

void battle(Pokemon &playerPokemon, Pokemon &wildPokemon){
    cout << "A wild " << wildPokemon.name << " appeared!\n";

    while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
    {
        playerPokemon.attack(wildPokemon); //Player attacks first

        if(!wildPokemon.isFainted())
        {
            wildPokemon.attack(playerPokemon); //Wild Pokemon attacks back
        }
    }

    if(playerPokemon.isFainted())
        {
            cout << playerPokemon.name << " has fainted! You lose the battle!\n";
        }
        else 
        {
            cout << "You defeated the wild " << wildPokemon.name << "!\n";
        }
    
}

