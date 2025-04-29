#pragma once
#include "../Pokemon.h"

namespace N_Pokemon{
    namespace N_Pokemons {
        class Pikachu : public Pokemon
        {
     
            public:
                Pikachu();
                void attack(Move selectedMove, Pokemon* target) override;
        };
    }
}