// BattleManager.h
#include "Pokemon.h"
#include "Player.h"
#include "BattleState.h"
using namespace std;

class BattleManager{
    public:
        void startBattle(Player &player, Pokemon &wildPokemon);
        
    private:
        BattleState battleState;
        
        void battle();
        void handleBattleOutcome();
        void updateBattleState();
};

