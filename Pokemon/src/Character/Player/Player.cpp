// Player.cpp
#include <iostream>
#include "../../../include/Character/Player/Player.h"
#include "../../../include/Pokemon/PokemonChoice.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/Pokemons/Squirtle.h"

using namespace std;

namespace N_Character{

    namespace N_Player {

        using namespace N_Utility;
        using namespace N_Pokemon;
        using namespace N_Pokemon::N_Pokemons;

        Player::Player(){
            name = "Trainer";
        }

        //Parametrised constructor
        Player::Player(string p_name){
            name = p_name;
        }

        void Player::choosePokemon(int choice){
            switch ((PokemonChoice)choice) { 
                case PokemonChoice::CHARMANDER:
                        chosenPokemon = new Charmander();
                        break; 
                case PokemonChoice::BULBASAUR: 
                        chosenPokemon = new Bulbasaur(); 
                        break; 
                case PokemonChoice::SQUIRTLE: 
                        chosenPokemon = new Squirtle();
                        break; 
                default: 
                        chosenPokemon = new Pikachu(); 
                        break; 
            } 
            cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
            Utility::waitForEnter;
        }
    }
}
