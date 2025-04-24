// Player.cpp
#include "../../../include/Character/Player/Player.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Pokemon/PokemonChoice.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>
using namespace std;

namespace N_Character{
    namespace N_Player {
        using namespace N_Utility;
        using namespace N_Pokemon;

        Player::Player(){
            name = "Trainer";
            chosenPokemon = N_Pokemon::Pokemon(); //Using the default Pokemon constructor
        }

        //Parametrised constructor
        Player::Player(string p_name, Pokemon p_chosenPokemon){
            name = p_name;
            chosenPokemon = p_chosenPokemon;
        }

        void Player::choosePokemon(int choice){
            switch ((PokemonChoice)choice) { 
                case PokemonChoice::CHARMANDER:
                        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100); 
                        break; 
                case PokemonChoice::BULBASAUR: 
                        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100); 
                        break; 
                case PokemonChoice::SQUIRTLE: 
                        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100); 
                        break; 
                default: 
                        chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100); 
                        break; 
            } 
            cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
            Utility::waitForEnter;
        }
    }
}
