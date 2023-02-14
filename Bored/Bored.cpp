#include <iostream>
#include <string>
#include <fstream>
#include "Save.h"

using namespace std;

//ints
int numChoice;

//bools
bool menu = true;
bool startGame;
bool SGF; 

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
            menu = false;
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
    startGame = true;
    while (startGame)
    {
        SGF = true;
        while (SGF)
        {
            cout << "If this is you'r first time playing make sure you read the tutorial\n\n";
            cout << "1. Tutorial\n";
            cout << "2. Skip\n\n";
            cout << "Action: ";
            cin >> numChoice;
            if (numChoice == 1)
            {
                Tutorial();
            }
            if (numChoice == 2)
            {
                SGF = false;
            }
        }
    }
}

void Tutorial()
{
    system("cls");
    cout << "Hi, so this is my game and I want to make sure you understand everything\n";
    cout << "The main infomations I want to make sure you understand is how to save\n";
    cout << "You can do this by entering the options is always avaible\n";
    cout << "Once you are done reading this just press any key to continue\n\n";
    system("pause");
}

void OptionsMenu()
{

}
