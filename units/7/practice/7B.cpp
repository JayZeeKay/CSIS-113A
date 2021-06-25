/*
Jacob Marinas

ID: 0602306

June 24, 2021

Guided Practice 7b - The While Loop

How to write loops correctly; identity bounds, the goal, and priming the loop
*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int guess;
	char ch = 'Y';	// Assigned to 'Y' so that the outer while loop runs at least once

	while (ch == 'Y')
	{
		// Values are reassigned, "reset" whenever a new game is played
		int count = 1;			
		int num = rand() % 10 + 1;

		cout << "Guess a number between 1 and 10" << endl;
		cin >> guess;

		while (guess != num)
		{
			count++;

			cout << "Guess a number between 1 and 10" << endl;
			cin >> guess;
		}
		cout << "It took " << count << " guesses to guess correctly" << endl;
		cout << "Would you like to play again? Y/N" << endl;
		cin >> ch;	// Answering anything other than Y will make the outer while loop condition false, and exit the loop
	}

	return 0;
}