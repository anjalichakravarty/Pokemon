// Charmander.h
#pragma once
#include "../Pokemon.h"

using namespace std;

namespace N_Pokemon{
    namespace N_Pokemons{
        class Charmander : public Pokemon{
          public:
                Charmander();
                void attack(Move selectedMove, Pokemon* target) override;
            
        };
    }
}
