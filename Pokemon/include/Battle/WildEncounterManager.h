#include <vector>
#include "Grass.h"

namespace N_Battle{
    class WildEncounterManager{
        public:
            N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass &grass);
    };
}