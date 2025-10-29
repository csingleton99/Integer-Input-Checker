// singleton_cmpsc330_inputint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// The instructions for this project are gibberish. I need to take some time to interpret them into a functional set of behaviors.
// Why would anyone structure a program for this behavior? An input validator is fine, but why would a user set
// the welcome message for the program?
// There's also no good way to split up code between the function and the main the way the rubric is formatted
// Some stuff that should obviously be grouped together is instead segmented off.
// super wierd

#include <iostream>
#include <string>
#include <limits>

std::string userMessage = "";
std::string userInteger;
int userMinimum = 0;
int userMaximum = 0;
int currentSelection;
bool programKillFlag = false;

int inputPurgatory;

void inputInt(std::string msg, int minVal, int maxVal)
{
    std::system("cls");
    if (msg.size() == 0)
        msg = "You have set your basic parameters. Enter the number you would like to check now.\n";

    std::cout << msg << "\n";
    std::cin >> userInteger;

    // some try-catch that makes sure the user input is actually an integer
    // and throws an error describing what is wrong with it if possible
    //


    std::cout << "Feed input purgatory or suffer the consequences.\n";
    std::cin >> inputPurgatory;
}

int main()
{

    // Whole program is in a loop. If the user enters -1, drop out of the loop
    while (programKillFlag == false)
    {
        std::system("cls");
        std::cin.seekg(0, std::ios::end);
        std::cin.clear();
        
        std::cout << "Welcome, this program validates user input to ensure that it is an integer.\n";
        std::cout << "Enter -1 during any step to end the program.\n\n";

        std::cout << "Enter the welcome message you would like to display:\n";
        std::getline(std::cin, userMessage);
        std::cout << "\n";

        if (userMessage != "-1")
        {
            std::cout << "Enter the lowest value you would like to accept:\n";
            std::cin >> userMinimum;
            std::cout << "\n";
        }
        else
            programKillFlag = true;

        if (userMinimum != -1 and programKillFlag == false)
        {
            std::cout << "Enter the highest number you would like to accept:\n";
            std::cin >> userMaximum;
        }
        else
            programKillFlag = true;

        if (userMaximum != -1 and programKillFlag == false)
        {
            inputInt(userMessage, userMinimum, userMaximum);
        }
        else
            programKillFlag = true;
    } 

    std::system("cls");
    std::cout << "Program over. See you next time!\n";
}
