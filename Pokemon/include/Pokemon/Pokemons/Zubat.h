#pragma once
#include "../Pokemon.h"

namespace N_Pokemon{
    namespace N_Pokemons{
        class Zubat : public Pokemon{
            public:
                Zubat();
                void supersonic(Pokemon &target);
        };
    }
}