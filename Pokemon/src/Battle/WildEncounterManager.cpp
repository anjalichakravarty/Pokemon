#include "../../include/Battle/WildEncounterManager.h"
#include "../../include/Pokemon/Grass.h"
#include "../../include/Pokemon/Pokemon.h"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager(){
    srand(time(0)); // Seed the random number generator
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass &grass) {
    int randomIndex = rand() % grass.wildPokemonList.size();
    return grass.wildPokemonList[randomIndex];
}