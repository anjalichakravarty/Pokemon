#include "Utility.h"
#include <iostream>
#include <limits>
using namespace std;

//Function to clear console
void Utility::clearConsole(){
    //Platform specific clear console command
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void Utility::waitForEnter(){
    cin.get(); //Wait for Enter key
}

void Utility::clearInputBuffer(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
