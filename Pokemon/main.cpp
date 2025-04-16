#include <iostream>
using namespace std;

int main() {
    
    //variables 
    string player_name;

    //introduction by professor
    cout << "Professor Oak: Welcome to the world of Pokémon! I am Professor Oak.\n";
    cout << "Professor Oak: Today is a momentous day—you’ll be choosing your very first Pokémon.";

    //taking player name as input
    cout << "Professor Oak: But before you embark on your journey, tell us your name!";
    cin >> player_name;
    cout << "Professor Oak: Ah," << player_name <<"! What a great name!\n"<<endl;

    //choosing the pokemon
    cout << "Professor Oak: I have three Pokémon with me";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";

    int choice;
    cout << "Which Pokémon would you like to choose? Enter the number: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "You chose Bulbasaur! A wise choice.\n";
    }
    else if (choice == 2)
    {
        cout << "You chose Charmander! A fiery choice.\n";
    }
    else if (choice ==3)
    {
        cout << "You chose Squirtle! A cool choice.\n";
    }
    else
    {
        cout << "Invalid choice. Please restart the game.\n";
    }
    



    


    return 0;
}
