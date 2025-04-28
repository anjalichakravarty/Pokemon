#pragma once
#include "../Pokemon.h"

namespace N_Pokemon{
    namespace N_Pokemons {
        class Pikachu : public Pokemon
        {
            private:
                void thunderShock(Pokemon* target);
                void attack(Pokemon* target) override;
                
            public:
                Pikachu();
                
        };
    }
}