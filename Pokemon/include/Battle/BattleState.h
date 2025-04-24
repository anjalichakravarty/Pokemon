// BattleState.h
#include "Pokemon.h"

using namespace std;

struct BattleState
{
    Pokemon playerPokemon;
    Pokemon wildPokemon;
    bool playerTurn;
    bool battleOngoing;
};
