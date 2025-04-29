// Pokemon.h
#include <string>
#include <vector>

using namespace std;

namespace N_Pokemon {
    
    struct Move;
    enum class PokemonType;

    class Pokemon {
            
        public:
            string name;
            PokemonType type;
            int health;
            int maxHealth;
            vector<Move> moves; //Store list of moves

            //Default constructor
            Pokemon();

            //Parametrised constructor
            Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move>);

            //Copy constructor
            Pokemon(Pokemon* other);

            //Destructor
            ~Pokemon();

            virtual void attack(Move selectedMove,Pokemon *target);
            void takeDamage(int damage); //Method to reduce HP
            bool isFainted() const; // Method to check if the Pokemon has fainted
            void heal(); // Method to restore HP to max
            void selectAndUseMove(Pokemon* target);

        protected:
            //Base implementation for selecting and using a move
            
            void printAvailableMoves();
            int selectMove();
            void useMove(Move selectedMove, Pokemon* target);
    };
}