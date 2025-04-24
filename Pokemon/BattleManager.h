// BattleManager.h
#include "Pokemon.h"
#include "Player.h"
using namespace std;

class BattleManager{
    public:
        void startBattle(Player &player, Pokemon &wildPokemon);
        
    private:
        void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
        void handleBattleOutcome(Player &player, bool playerWon);
};

