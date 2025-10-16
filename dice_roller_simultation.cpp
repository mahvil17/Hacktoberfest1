// -------------------------------------------------------------
// Author: Mahvil
// Program: Dice Roller Simulation
// Description: A fun and simple program that simulates rolling a dice.
// Date: October 2025
// -------------------------------------------------------------
// This program uses random number generation to mimic a dice roll.
// It demonstrates the use of loops, conditionals, and user interaction.
// Feel free to enhance it by adding multiple dice, ASCII art, or score tracking!
// -------------------------------------------------------------
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed for random number generation
    char choice;

    cout << "🎲 Dice Roller Simulation 🎲" << endl;

    do {
        int dice = (rand() % 6) + 1; // random number between 1 and 6
        cout << "You rolled: " << dice << endl;

        cout << "Roll again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!" << endl;
    return 0;
}
