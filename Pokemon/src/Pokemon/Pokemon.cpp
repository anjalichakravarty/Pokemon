#include "../../include/Pokemon/Pokemon.h"
#include "../../include/Pokemon/PokemonType.h"
#include <iostream>
using namespace std;

namespace N_Pokemon {
    //Default Constructor
    Pokemon::Pokemon(){
    name = "Unknown"; 
    type = PokemonType::NORMAL;
    health = 50;
    maxHealth = 50;
    attackPower = 10;
    }

    //Parametrised Constructor
    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower) 
     {
        name = p_name; 
        type = p_type; 
        maxHealth = p_maxHealth; 
        health = p_maxHealth; 
        attackPower = p_attackPower;
    }

    //Copy Constructor
    Pokemon::Pokemon(Pokemon* other)
    {
        name = other->name;
        type = other->type;
        health = other->health;
        maxHealth = other->maxHealth;
        attackPower = other->attackPower;
    }

    void Pokemon::takeDamage(int damage){
        health -= damage;
        if (health < 0)
        {
            health = 0; // Ensure HP doesn't go below 0
        }
    }

    bool Pokemon::isFainted() const{
        return health <= 0; //Return true if HP is 0 or less
    }

    void Pokemon::heal(){
        health = maxHealth; //Restore health to full
    }
}