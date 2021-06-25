/*
Jacob Marinas

ID: 0602306

June 24, 2021

Lab Assignment 8 - The While Loop

Using a while loop create a simple coin flip game
*/

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));	// different seed each time the program is executed, as random as possible

	char play, coinGuess, coinFlip;
	string coinState;				// For storing "Heads" or "Tails", converted from coinFlip's H and T

	// It is possible to print Heads and Tails without coinState, but would require more lines of code with two
	// more nested if-statements, and two more cout statements. I made the conscious decision to initialize a string variable instead

	cout << "Welcome to the coin flip game. It costs a dollar to play" << endl;
	cout << "If you guess correctly you will win $2.00" << endl;
	cout << "Do you want to play? Y/N" << endl;	// Priming the loop so that it can evaluate the condition properly
	cin >> play;

	int bank = 10;

	while (toupper(play) == 'Y')	// toupper() function included so that both uppercase and lowercase is accepted
	{
		cout << "Your bank is $" << bank << endl;
		cout << "Enter heads or tails. H/T" << endl;
		cin >> coinGuess;

		coinFlip = rand() % 2 ? 'T' : 'H';			// ternary operator to assign coinFlip to heads or tails, since boolean expressions can be 1 or 0 as well
		coinState = coinFlip == 'H' ? "Heads" : "Tails";	// coinState is used to verbosely describe H and T as Heads and Tails, to be printed to console

		if (toupper(coinGuess) == coinFlip)
		{
			cout << "Winner, the coin flip came up " << coinState << endl;
			bank += 2;
		}
		else
		{
			cout << "Sorry, you lose. The coin flip came up " << coinState << endl;
		}
		bank--;
		cout << "Would you like to play again? Y/N" << endl;
		cin >> play;
	}

	cout << "Thanks for playing, your bank is $" << bank << endl;
	cout << "Please come again" << endl;

	return 0;
}