// Charmander.h
#pragma once
#include "../Pokemon.h"

using namespace std;

namespace N_Pokemon{
    namespace N_Pokemons{
        class Charmander : public Pokemon{
            private:
                void flameBurst(Pokemon* target);
                void attack(Pokemon* target) override;
            
            public:
                Charmander();

            
        };
    }
}
