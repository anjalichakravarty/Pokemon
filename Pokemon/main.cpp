#include <iostream>
#include <string> 
using namespace std;

enum class PokemonChoice{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU //Default choice
};

enum class PokemonType{
    FIRE,
    GRASS,
    WATER,
    ELECTRIC,
    NORMAL //Added to default constructor
};

class Pokemon
{
    public:
        string name;
        PokemonType type;
        int health;

        //Default constructor
        Pokemon(){
            name = "Unknown";
            type = PokemonType::NORMAL;
            health = 50;
            cout << "A new Pokemon has been created with the default constructor!\n";
        }

        //Parametrised constructor
        Pokemon(string p_name, PokemonType p_type, int p_health){
            name = p_name;
            type = p_type;
            health = p_health;
            cout << "A new Pokemon named" << name << "has been created!\n";
        }

        //Copy constructor
        Pokemon(const Pokemon &other){
            name = other.name;
            type = other.type;
            health = other.health;
            cout << "A new Pokemon has been copied from " << other.name << "!\n";
        }

        //Destructor
        ~Pokemon(){
            cout << name << " has been released.\n";
        }

        void attack(){
            cout << name << "attacks with a powerful move!\n";
        }
};

class Player 
{
    public:
        //Attributes
        string name;
        Pokemon chosenPokemon;

        //Default constructor
        Player(){
            name = "Trainer";
            chosenPokemon = Pokemon(); //Using the default Pokemon constructor
            cout << "A new player named " << name << "has been created!\n";
        }

        //Parametrised constructor
        Player(string p_name, Pokemon p_chosenPokemon){
            name = p_name;
            chosenPokemon = p_chosenPokemon;
            cout << "Player " << name << " has been created!\n";
        }

        //Method to choose Pokemon
        void choosePokemon(int choice){
            switch ((PokemonChoice)choice) { 
                case PokemonChoice::CHARMANDER:
                        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100); 
                        break; 
                case PokemonChoice::BULBASAUR: 
                        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100); 
                        break; 
                case PokemonChoice::SQUIRTLE: 
                        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100); 
                        break; 
                default: 
                        chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100); 
                        break; 
            } 
            cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
        }

};

class ProfessorOak 
{
    //Attributes
    public:
        string name;

        //Parametrised constructor
        ProfessorOak(string p_name){
            name = p_name;
        }

        //Method to greet the player
        void greetPlayer(Player &player){
            cout << name << ": Hello there! Welcome to the world of Pokemon!\n"; 
            cout << name << ": My name is Oak. People call me the Pokemon Professor!\n"; 
            cout << name << ": But enough about me. Let's talk about you!\n";
        }

        //Method to ask the player to choose a Pokemon
        void offerPokemonChoices(Player &player){
            cout << name << ": First, tell me, what is your name?\n"; 
            getline(cin, player.name); 
            cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
            cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n"; 

            // Presenting Pokemon choices 
            cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n"; 
            cout << name << ": Choose wisely...\n"; std::cout << "1. Charmander - The fire type. A real hothead!\n"; 
            cout << "2. Bulbasaur - The grass type. Calm and collected!\n"; 
            cout << "3. Squirtle - The water type. Cool as a cucumber!\n"; 

            int choice; 
            cout << name << ": So, which one will it be? Enter the number of your choice: "; 
            cin >> choice; 
            player.choosePokemon(choice);
        }
};

int main() {

    //Test default and parametrised constructor
    Pokemon defaultPokemon; //Using default constructor
    Pokemon charmander("Charmander", PokemonType::FIRE, 100); //Using parametrised

    cout << "Pokemon details:\n";
    cout << "Name: " << defaultPokemon.name <<"\nType: " << (int)defaultPokemon.type << "\nHealth: " << defaultPokemon.health << "\n";
    cout << "Name: " << charmander.name << "\nType: " << (int)charmander.type << "\nHealth: " << charmander.health << "\n";

    //Test the copy constructor
    Pokemon bulbasaur("Bulbasaur", PokemonType::GRASS, 100); //Create a Pokemon
    Pokemon bulbasaurCopy = bulbasaur; //Copy the pokemon
    cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

    //Modify the copy
    bulbasaurCopy.health = 80;
    cout << "After Modification:\n";
    cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

    //Destructor
    {
        Pokemon squirtle("Squirtle", PokemonType::WATER, 100); //Pokemon will be destroyed at the end of this scope
    }

    //Creating objects of Professor Oak, Pokemon and Player
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    //Greet the player and offerPokemonChoices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    //Conclude the first chapter
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ",are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
