#pragma once
#include <string>
using namespace std;

namespace N_Pokemon{
    class Pokemon;

    namespace N_StatusEffects{
        class IStatusEffect {
            public:

                virtual void applyEffect(Pokemon* target) = 0; //Apply the effect

                virtual string getEffectName() = 0; //Get the name of the effect

                //apply the changes due to effect after end of each turn
                // returns true if the target is able to move, else false
                virtual bool turnEndEffect(Pokemon* target) = 0;

                virtual void clearEffect(Pokemon* target) = 0; //remove the effect
        };
    }
}