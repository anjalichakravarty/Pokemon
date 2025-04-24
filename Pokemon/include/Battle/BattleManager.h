// BattleManager.h
#include "Pokemon.h"
#include "Player.h"
#include "BattleState.h"
using namespace std;

namespace N_Battle{
    class BattleManager{
        public:
            void startBattle(N_Character::N_Player::Player &player, N_Pokemon::Pokemon &wildPokemon);
            
        private:
            BattleState battleState;
            
            void battle();
            void handleBattleOutcome();
            void updateBattleState();
    };
}
