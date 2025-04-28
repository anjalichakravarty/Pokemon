// Squirtle.h
#pragma once
#include "../Pokemon.h"
 
namespace N_Pokemon{
    namespace N_Pokemons{
        
        class Squirtle : public Pokemon{

            public:
                Squirtle();
                void attack(Move selectedMove, Pokemon* target) override;
        };


    }
 }