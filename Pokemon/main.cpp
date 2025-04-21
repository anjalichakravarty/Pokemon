#include <iostream>
#include <string> 
using namespace std;

//Function to clear console
void clearConsole(){
    //Platform specific clear console command
    #ifdef _WIN32
        system("cls");
    #else
        (void)system("clear");
    #endif
}

void waitForEnter(){
    cin.get(); //Wait for Enter key
}

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
        }

        //Parametrised constructor
        Pokemon(string p_name, PokemonType p_type, int p_health){
            name = p_name;
            type = p_type;
            health = p_health;
        }

        //Copy constructor
        Pokemon(const Pokemon &other){
            name = other.name;
            type = other.type;
            health = other.health;
        }

        //Destructor
        ~Pokemon(){
            
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
        }

        //Parametrised constructor
        Player(string p_name, Pokemon p_chosenPokemon){
            name = p_name;
            chosenPokemon = p_chosenPokemon;
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
            waitForEnter();
            cout << name << ": My name is Oak. People call me the Pokemon Professor!\n"; 
            waitForEnter();
            cout << name << ": But enough about me. Let's talk about you!\n";
            waitForEnter();
        }

        //Method to ask the player to choose a Pokemon
        void offerPokemonChoices(Player &player){
            cout << name << ": First, tell me, what is your name?\n"; 
            getline(cin, player.name); 
            cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
            waitForEnter();
            cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n"; 
            waitForEnter();

            // Presenting Pokemon choices 
            cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n"; 
            waitForEnter();
            cout << name << ": Choose wisely...\n";
            waitForEnter();
            cout << "1. Charmander - The fire type. A real hothead!\n"; 
            cout << "2. Bulbasaur - The grass type. Calm and collected!\n"; 
            cout << "3. Squirtle - The water type. Cool as a cucumber!\n"; 
            waitForEnter();

            int choice; 
            cout << name << ": So, which one will it be? Enter the number of your choice: "; 
            cin >> choice; 
            player.choosePokemon(choice);
        }

        //Method to explain main quest
        void explainMainQuest(Player &player){

            //Clear console
            clearConsole();

            cout << "Professor Oak: Oak-ay " << player.name << ", I am about to explain you about your upcoming grand adventure.\n";
            waitForEnter();
            cout << "Professor Oak:   You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck.\n";
            waitForEnter();
            cout << "Professor Oak:  Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
            waitForEnter();
            cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokémon game out there.\n";
            waitForEnter();
            cout << "Professor Oak:  Shhh! Don't break the fourth wall " << player.name << "! This is serious business.\n";
            waitForEnter();
            cout << "Professor Oak:  To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
            waitForEnter();
            cout << "Professor Oak:   Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
            waitForEnter();
            cout << "\n" << player.name << " : Sounds like a walk in the park... right?\n";
            waitForEnter();
            cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
            waitForEnter();
            cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
            waitForEnter();
            cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!\n";
            waitForEnter();
            cout << "Professor Oak: That’s the spirit! Now, your journey begins.\n";
            waitForEnter();
            cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        }
};

void gameLoop(Player &player)
{
    int choice;
    bool keepPlaying = true;

    while (keepPlaying){
        
        //Clear console before showing options
        clearConsole();

        //Display options for players
        cout << "\nWhat would you like to do next, " << player.name << "?\n";
        cout << "1. Battle wild Pokemons\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokemon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Clear the newline character left in the buffer after cin >> choice
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //Process the players choice and display the corresponding message
        switch(choice) {
            case 1:
                cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\\n";
                break;
            
            case 2:
                cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n";
                break;
            
            case 3:
                cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n";
                break;
            
            case 4:
                cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
                break;

            case 5:
                cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\\n";
                break;

            default:
                cout << "That's not a valid choice. Try again!\n";
                break;

            //Wait for Enter key before the screen is cleared and the menu is shown again
            waitForEnter();
        }

        cout << "Goodbye, " << player.name << "! Thank you for playing!\n";
    }
}

int main() {

    Pokemon charmander("Charmander", PokemonType::FIRE, 100); //Using parametrised

    //Creating objects of Professor Oak, Pokemon and Player
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    //Greet the player and offerPokemonChoices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    //Explain the main quest
    professor.explainMainQuest(player);

    //Conclude the first chapter
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ",are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
