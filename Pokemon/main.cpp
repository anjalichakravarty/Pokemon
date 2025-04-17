#include <iostream>
using namespace std;

<<<<<<< Updated upstream
//Define an enum of pokemon choices
enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

enum class PokemonType {
    Fire,
    Electric,
    Water,
    Earth,
    Normal
=======
class Pokemon
{
    //Empty Class
>>>>>>> Stashed changes
};

int main() {
    
    //variables 
    string player_name;
    PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice; //default to an invalid choice

    //introduction by professor
    cout << "Professor Oak: Welcome to the world of Pokémon! I am Professor Oak.\n";
    cout << "Professor Oak: Today is a momentous day—you will be choosing your very first Pokémon.\n"<<endl;

    //taking player name as input
    cout << "Professor Oak: But before you embark on your journey, tell us your name!";
    cin >> player_name;
    cout << "Professor Oak: Ah," << player_name <<"! What a great name!\n"<<endl;

    //choosing the pokemon
    cout << "Professor Oak: I have three Pokémon with me";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Charmander\n2. Bulbasaur\n3. Squirtle\n";

    int choice;
    cout << "Which Pokémon would you like to choose? Enter the number: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        chosen_pokemon = PokemonChoice::Charmander;
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;

    case 2:
        chosen_pokemon = PokemonChoice::Bulbasaur;
        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
        break;

    case 3:
        chosen_pokemon = PokemonChoice::Squirtle;
        cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
        break;
    
    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        chosen_pokemon = PokemonChoice::Charmander; //Default if no vaild choice is made
        cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
        break;
    }
    
    return 0;
}
