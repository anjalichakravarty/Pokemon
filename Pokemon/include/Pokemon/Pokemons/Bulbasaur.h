//Bulbasaur.h
#pragma once
#include "../Pokemon.h"

namespace N_Pokemon{
    namespace N_Pokemons{
        class Bulbasaur : public Pokemon{
            private:
                void vineWhip(Pokemon* target);
                void attack(Pokemon* target) override;

            public:
                Bulbasaur();
        };
    }
}