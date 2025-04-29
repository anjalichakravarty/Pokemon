//Bulbasaur.h
#pragma once
#include "../Pokemon.h"

namespace N_Pokemon{
    namespace N_Pokemons{
        class Bulbasaur : public Pokemon{
            public:
                Bulbasaur();
                void attack(Move selectedMove, Pokemon* target) override;
        };
    }
}