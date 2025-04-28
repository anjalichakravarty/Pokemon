#pragma once
#include "../Pokemon.h"

namespace N_Pokemon{
    namespace N_Pokemons{

        class Pidgey : public Pokemon{

            private:
                void wingAttack(Pokemon* target);
                void attack(Pokemon* target) override;

            public:
                Pidgey();
                
        };
    }
}
