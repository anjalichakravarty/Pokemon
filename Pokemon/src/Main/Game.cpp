#include "../../include/Main/Game.h"
#include "../../include/Battle/BattleManager.h"
#include "../../include/Battle/WildEncounterManager.h"
#include "../../include/Character/Player/Player.h"
#include "../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../include/Pokemon/Pokemons/Zubat.h"
#include "../../include/Utility/Utility.h"

#include <iostream>
using namespace std;

namespace N_Main {
    using namespace N_Utility;
    using namespace N_Pokemon;
    using namespace N_Pokemon::N_Pokemons;
    using namespace N_Battle;
    using namespace N_Character::N_Player;
    
    Game::Game(){
        // Create a sample grass environment with actual Pokemon objects
        forestGrass = {"Forest",
            {
                new Pidgey(), new Caterpie(), new Zubat()
            },
            70
        };
    }

    void Game::gameLoop(N_Character::N_Player::Player* player)
    {

        int choice;
        bool keepPlaying = true;
        BattleManager* battleManager = new BattleManager();
        WildEncounterManager* encounterManager = new WildEncounterManager();

        while (keepPlaying){
            
            //Clear console before showing options
            Utility::clearConsole();

            //Display options for players
            cout << "\nWhat would you like to do next, " << player->name << "?\n";
            cout << "1. Battle wild Pokemons\n";
            cout << "2. Visit PokeCenter\n";
            cout << "3. Challenge Gyms\n";
            cout << "4. Enter Pokemon League\n";
            cout << "5. Quit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            Utility::clearInputBuffer(); //Clear input buffer

            //Process the players choice and display the corresponding message
            switch(choice) {
                case 1:{
                    // Create a scope within case 1                   
                    wildPokemon = encounterManager->getRandomPokemonFromGrass(forestGrass);
                    battleManager->startBattle(player, wildPokemon);
                    break;
                }
                
                case 2:{
                    visitPokeCenter(player);
                    break;
                    }
                
                case 3:
                    cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n";
                    break;
                
                case 4:
                    cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
                    break;

                case 5:
                    keepPlaying = false;
                    break;

                default:
                    cout << "That's not a valid choice. Try again!\n";
                    break;

                //Wait for Enter key before the screen is cleared and the menu is shown again
            }            
        }
        Utility::waitForEnter();
        cout << "Goodbye, " << player->name << "! Thank you for playing!\n";

        delete(encounterManager);
        delete(battleManager);
    }

    void Game::visitPokeCenter(N_Character::N_Player::Player* player)
    {
        if (player->chosenPokemon->health == player->chosenPokemon->maxHealth)
        {
            cout << "Your Pokemon is already at full health!\n";
        }
        else
        {
            cout << "You head to the PokeCenter.\n";
            cout << "Healing your Pokemon...\n";
            N_Utility::Utility::waitForEnter(); //Simulate a short pause for the healing process
            player->chosenPokemon->heal();
            cout << player->chosenPokemon->name << "'s health is fully restored!\n";
        }
    }

    Game::~Game()
    {
        delete(wildPokemon);
    }
}