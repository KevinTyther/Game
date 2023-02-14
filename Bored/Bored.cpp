#include <iostream>
#include <string>
#include <fstream>
#include "Save.h"

using namespace std;

//ints
int numChoice;

//bools
bool menu = true;

//strings
string stringChoice;

//functions
void Menu();
void StartGame();
void OptionsMenu();

int main()
{
    Menu();
}

void static Menu()
{
    while (menu)
    {
        system("cls");
        cout << "Welcome player to \"Game\" are you ready to play\n\n";
        cout << "1. Start\n";
        cout << "2. New Game - (Only avaible when theres a save file)\n";
        cout << "3. Options - (Can be accessed at anytime)\n";
        cout << "4. Exit - (Please don't go)\n\n";
        cout << "Action: ";
        cin >> numChoice;
        if (numChoice == 1)
        {
            system("cls");
            StartGame();
        }
        if (numChoice == 2)
        {
            system("cls");
            cout << "WIP\n";
            system("pause");
        }
        if (numChoice == 3)
        {
            system("cls");
            OptionsMenu();
            system("pause");
        }
        if (numChoice == 4)
        {
            exit(1);
        }
    }


}

void StartGame()
{

}

void OptionsMenu()
{

}
