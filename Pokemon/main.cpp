#include <iostream>
using namespace std;

int main() {

    //start the game
    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
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
    
    

    //player name
    string player_name;
    cout << "Trainer! Before you embark on your journey, \n the Pokémon world needs to know who you are!";
    cout << "Time to step up and tell us your name. \n And remember, a great name is the start of every great adventure!";
    cin >> player_name;

    cout << "Great start Trainer!" << player_name <<"Looks like you’ve mastered the opening of every code adventure. \n Keep this up, and you’ll be a coding master in no time!"<<endl;



    return 0;
}
