// Squirtle.cpp
#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 35){}

        void Squirtle::waterSplash(Pokemon* target)
        {
            cout << name << " uses Water splash on " << target->name << "!\n";
            target->takeDamage(20);
        }

        void Squirtle::attack(Pokemon* target)
        {
            waterSplash(target);
        }
    }
}