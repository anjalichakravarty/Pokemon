#pragma once
#include "../Character/Player/Player.h"
#include "../Pokemon/Grass.h"

namespace N_Main {
    using namespace N_Pokemon;
    using namespace N_Character::N_Player;

    class Game{
        private:
            Grass forestGrass;
        public:
            Game();

            void gameLoop(N_Character::N_Player::Player &player);
            void visitPokeCenter(N_Character::N_Player::Player &player);
    };
}