//Bulbasaur.cpp
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_Pokemons{
        using namespace std;

        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 100, 35){}

        void Bulbasaur::vineWhip(Pokemon* target)
        {
            cout << name << " uses vine whip on " << target->name << "!\n";
            target->takeDamage(20);
        }

        void Bulbasaur::attack(Pokemon* target)
        {
            vineWhip(target);
        }
    }
}