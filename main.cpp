#include <iostream>
#include <stdlib.h> // To use srand() rand() that generate random

using namespace std;

char user() {
    char player;
        do{
            cout << "Pick one of the following" << endl;
            cout << "*************************" << endl;
            cout << "'r' for rock" << endl;
            cout << "'p' for paper" << endl;
            cout << "'s' for scissor" << endl;
            cin >> player;
        }while(player != 'r' && player != 's' && player != 'p');

        return player;
}; // char would be use as the return type for this function
char simpleAI() {
    char computer;

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num) // return value so break statement is not needed
    {
    case 1: return 'r'; // Return value for rock
    case 2: return 'p'; // Return value for paper
    case 3: return 's'; // Return value for scissor
    }

    return 0;
};

void choices(char choice) { // void = no return type with the parameter char choice
    switch(choice) {
        case 'r': cout << "Rock" << endl;
                break;
        case 'p': cout << "Paper" << endl;
                break;
        case 's': cout << "Scissor" << endl;
                break;
    }
}

void pickWinner(char player, char computer) {
    switch (player) {
    case 'r':   if(computer == 'r') {
                    cout << "It's a draw." << endl;
                }
                else if(computer == 'p') {
                    cout << "Aww, you lose." << endl;
                }
                else {
                    cout << "Yay! You win!" << endl;
                }
                break;

    case 'p':   if(computer == 'p') {
                    cout << "It's a draw." << endl;
                }
                else if(computer == 's') {
                    cout << "Aww, you lose." << endl;
                }
                else {
                    cout << "Yay! You win!" << endl;
                }
                break;

    case 's':   if(computer == 's') {
                    cout << "It's a draw." << endl;
                }
                else if(computer == 'r') {
                    cout << "Aww, you lose." << endl;
                }
                else {
                    cout << "Yay! You win!" << endl;
                }
                break;
    }
} // char player = players, char computer = computer's choice will be generated randomly

int main() {
    cout << "*=========================*" << endl;
    cout << "*                         *" << endl;
    cout << "* Rock-Paper-Scissor Game *" << endl;
    cout << "*                         *" << endl;
    cout << "*=========================*" << endl;

    char player = user();
    cout << "Your choice is: ";
    choices(player);

    char computer = simpleAI();
    cout << "Computer choice is: ";
    choices(computer);

    pickWinner(player, computer);

    return 0;
}