#include <iostream>

using namespace std;

int main()
{
	int num, guesses = 1;

	cout << "Can you guess the pattern?" << endl;
	cout << "4, 1, -3, -4, ?" << endl;
	cout << "Enter a number: " << endl;
	cin >> num;

	while (num != -1 && guesses < 5)
	{
		cout << "Try again" << "\n" << endl;
		cout << "4, 1, -3, -4, ?" << endl;
		cout << "Enter a number: " << endl;
		cin >> num;
		guesses++;
	}
	
	if (num == -1)
	{
		cout << "Great job! You solved it in " << guesses << " tries" << endl;
	}
	else
	{
		cout << "Better luck next time" << endl;
	}
	
	return 0;
}