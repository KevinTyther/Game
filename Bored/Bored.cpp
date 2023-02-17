#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Save.h"

using namespace std;

//ints
int numChoice;
int health = 100;
int smarts = 1;
int defense = 0;
int mana = 1;
int strength = 1;
int stamina = 1;
int statPoints = 10;

//bools
bool menu = true;
bool startGame;
bool SGF; 
bool stats;

//strings
string stringChoice;
string name;

//functions
void Menu();
void StartGame();
void OptionsMenu();
void Tutorial();
void Loading();
void Game();

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
    SGF = true;
    while (startGame)
    {
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
        system("cls");
        cout << "Let's create a character\n";
        cout << "Character name: ";
        cin >> stringChoice;
        stringChoice = name;
        stringChoice = "";
        system("cls");
        cout << "Next we're going to give this character some stats\n\n";
        system("pause");
        stats = true;
        while (stats)
        {
            system("cls");
            cout << "You have " << statPoints << " Left\n";
            cout << "You can remove by adding a '-' in front of the amount\n";
            cout << "1. Smarts - " << smarts << "\n";
            cout << "2. Defense - " << defense << "\n";
            cout << "3. Mana - " << mana << "\n";
            cout << "4. Strength - " << strength << "\n";
            cout << "5. Stamina - " << stamina << "\n";
            cout << "6. Done\n";
            cout << "7. Reset (use if bugged or quick reset)\n\n";
            cout << "Action: ";
            cin >> numChoice;
            if (numChoice == 1)
            {
                system("cls");
                cout << "How many points would you like to add to your Smarts\n";
                cout << "Smarts - " << smarts << "\n";
                cout << "You have " << statPoints << " left\n\n";
                cout << "Amount: ";
                cin >> numChoice;
                if (numChoice > statPoints)
                {
                    cout << "You don't have enough points\n";
                    system("pause");
                }
                if (numChoice <= statPoints)
                {
                    if (smarts < 10)
                    {
                        smarts = numChoice + smarts;
                        statPoints = statPoints - numChoice;
                    }
                    if (smarts >= 10)
                    {
                        cout << "Level 10 is max you must level up you're character to get to higher skill levels\n\n";
                        system("pause");
                        smarts = 10;
                        statPoints = 1;
                    }
                }
            }
            if (numChoice == 2)
            {
                system("cls");
                cout << "How many points would you like to add to your Defense\n";
                cout << "Defense - " << defense << "\n";
                cout << "You have " << statPoints << " left\n\n";
                cout << "Amount: ";
                cin >> numChoice;
                if (numChoice > statPoints)
                {
                    cout << "You don't have enough points\n";
                    system("pause");
                }
                if (numChoice <= statPoints)
                {
                    if (defense < 10)
                    {
                        defense = numChoice + defense;
                        statPoints = statPoints - numChoice;
                    }
                    if (defense >= 10)
                    {
                        cout << "Level 10 is max you must level up you're character to get to higher skill levels\n\n";
                        system("pause");
                        defense = 10;
                        statPoints = 1;
                    }
                }

            }
            if (numChoice == 3)
            {
                system("cls");
                cout << "How many points would you like to add to your Mana\n";
                cout << "Mana - " << mana << "\n";
                cout << "You have " << statPoints << " left\n\n";
                cout << "Amount: ";
                cin >> numChoice;
                if (numChoice > statPoints)
                {
                    cout << "You don't have enough points\n";
                    system("pause");
                }
                if (numChoice <= statPoints)
                {
                    if (mana < 10)
                    {
                        mana = numChoice + mana;
                        statPoints = statPoints - numChoice;
                    }
                    if (mana >= 10)
                    {
                        cout << "Level 10 is max you must level up you're character to get to higher skill levels\n\n";
                        system("pause");
                        mana = 10;
                        statPoints = 1;
                    }
                }

            }
            if (numChoice == 4)
            {
                system("cls");
                cout << "How many points would you like to add to your Strength\n";
                cout << "Strength - " << strength << "\n";
                cout << "You have " << statPoints << " left\n\n";
                cout << "Amount: ";
                cin >> numChoice;
                if (numChoice > statPoints)
                {
                    cout << "You don't have enough points\n";
                    system("pause");
                }
                if (numChoice <= statPoints)
                {
                    if (strength < 10)
                    {
                        strength = numChoice + strength;
                        statPoints = statPoints - numChoice;
                    }
                    if (strength >= 10)
                    {
                        cout << "Level 10 is max you must level up you're character to get to higher skill levels\n\n";
                        system("pause");
                        strength = 10;
                        statPoints = 1;
                    }
                }

            }
            if (numChoice == 5)
            {
                system("cls");
                cout << "How many points would you like to add to your Stamina\n";
                cout << "Stamina - " << stamina << "\n";
                cout << "You have " << statPoints << " left\n\n";
                cout << "Amount: ";
                cin >> numChoice;
                if (numChoice > statPoints)
                {
                    cout << "You don't have enough points\n";
                    system("pause");
                }
                if (numChoice <= statPoints)
                {
                    if (stamina < 10)
                    {
                        stamina = numChoice + stamina;
                        statPoints = statPoints - numChoice;
                    }
                    if (stamina >= 10)
                    {
                        cout << "Level 10 is max you must level up you're character to get to higher skill levels\n\n";
                        system("pause");
                        stamina = 10;
                        statPoints = 1;
                    }
                }

            }
            if (numChoice == 6)
            {
                if (statPoints >= 0)
                {
                    cout << "\n\nAre you sure you want to continue you still have " << statPoints << " left\n";
                    cout << "1. Yes\n";
                    cout << "2. No\n";
                    cout << "Action: ";
                    cin >> numChoice;
                    if (numChoice == 1)
                    {
                        stats = false;
                        SGF = false;
                        startGame = false;
                    }
                    if (numChoice == 2)
                    {
                        stats = true;
                        system("cls");
                    }
                    if (numChoice >= 3)
                    {
                        cout << "Not a valid option\n";
                        system("pause");
                        system("cls");
                    }
                }
            }
            if (numChoice == 7)
            {
                smarts = 1;
                defense = 0;
                mana = 1;
                strength = 1;
                stamina = 1;
                statPoints = 10;
            }
            if (numChoice >= 8)
            {
                cout << "Not a valid option\n";
                system("pause");
                system("cls");
            }
        }
    }
    system("cls");
    cout << "Lets get started\n";
    system("pause");
    Loading();
    

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

void Loading() // For fun
{
    cout << "*____" << endl;
    Sleep(500);
    system("cls");
    cout << "**___" << endl;
    Sleep(640);
    system("cls");
    cout << "***__" << endl;
    Sleep(300);
    system("cls");
    cout << "****_" << endl;
    Sleep(1000);
    system("cls");
    cout << "*****" << endl;
}

void Game()
{

}