#include "Pokemon.h"
#include "PokemonType.h"
#include <iostream>
using namespace std;

//Default Constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50){}

//Parametrised Constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower) 
 : name(p_name), type(p_type), maxHealth(p_maxHealth), health(p_maxHealth), attackPower(p_attackPower){}

//Copy Constructor
Pokemon::Pokemon(const Pokemon &other)
 : name(other.name), type(other.type), health(other.health){}

//Destructor
Pokemon::~Pokemon(){
    //Destructor logic (if any) goes here
}

void Pokemon::attack(Pokemon &target){
    int damage = attackPower; //Use attackPower for damage calculation
    cout << name << "attacks " << target.name << " for " << damage << " damage!\n";
    target.takeDamage(damage); //Apply damage to target pokemon
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
