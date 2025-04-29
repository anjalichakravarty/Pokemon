#include "../../../include/Pokemon/StatusEffects/ParalyzedEffect.h"
#include "../../../include/Pokemon/Pokemon.h"
#include "../../../include/Pokemon/StatusEffects/IStatusEffect.h"
#include <iostream>

namespace N_Pokemon{
    namespace N_StatusEffects{
        using namespace std;

        void ParalyzedEffect::applyEffect(Pokemon* target)
        {
            cout << target->name << " is paralyzed! It may not be able to move!\n";

            //Effect lasts between 1 and 3 turns randomly
            turnsLeft = rand() % 3 + 1;
        }

        string ParalyzedEffect::getEffectName()
        {
            return "Paralyzed";
        }

        bool ParalyzedEffect::turnEndEffect(Pokemon* target)
        {
            if (turnsLeft <= 0)
            {
                clearEffect(target);
                return true; //Can move as the effect is cleared
            }
            turnsLeft--;

            //Generate a number between 0 and 3 
            int paralysis_chance = rand() % 4;

            //25% chance that the pokemon cannot move due to paralysis
            if (paralysis_chance == 0)
            {
                cout << target->name << " is paralyzed! It can't move!\n";
                return false; // Pokemon cannot act this turn
            }

            //Otherwise it can act normally
            cout << target->name << " shakes off the paralysis momentarily and can move!\n";
            return true; //Pokemon can act this turn
        }

        void ParalyzedEffect::clearEffect(Pokemon* target)
        {
            cout << target->name << " is no longer paralyzed!\n";
            target->clearEffect();
        }
    }
}