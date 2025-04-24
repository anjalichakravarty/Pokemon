#include "../Character/Player/Player.h"
#include "Grass.h"

namespace N_Main {
    using namespace N_Pokemon;

    class Game{
        private:
            Grass forestGrass;
        public:
            Game();

            void gameLoop(N_Character::N_Player::Player &player);
    };
}