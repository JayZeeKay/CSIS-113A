/*
Jacob Marinas

ID: 0602306

June 16, 2021

Guided Practice 3B - The if statement

How relational operators in conjunction with the if statement can be used to make decisions in code
*/
#include <iostream>

using namespace std;

int main()
{
	// Take in a character, and output how well they are doing

	char grade;

	cout << "Enter your grade" << endl;
	cin >> grade;

	// Note that the input can be uppercase or lowercase, so must account for both
	
	if (grade == 'A' || grade == 'a') 
	{
		cout << "Excellent work" << endl;
	}
	else if (grade == 'B' || grade == 'b')
	{
		cout << "Above average work" << endl;
	}
	else if (grade == 'C' || grade == 'c')
	{
		cout << "Average work" << endl;
	}
	else if (grade == 'D' || grade == 'd')
	{
		cout << "Below average work" << endl;
	}
	else if (grade == 'F' || grade == 'f')
	{
		cout << "You are failing" << endl;
	}
	else
	{
		cout << "Invalid input" << endl;	// Catches all other cases, since none of the previous if statements were met
	}

	return 0;
}