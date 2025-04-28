// BattleManager.h
#include "../Battle/BattleState.h"
#include "../Character/Player/Player.h"

using namespace std;

namespace N_Battle{

    class Pokemon;
    using namespace N_Character::N_Player;
    using namespace N_Pokemon;

    class BattleManager{
        public:
            void startBattle(N_Character::N_Player::Player* player, N_Pokemon::Pokemon* wildPokemon);
            static void stopBattle();

        private:
            static BattleState battleState;
            
            void battle();
            void handleBattleOutcome();
            void updateBattleState();
    };
}
