/*
Jacob Marinas

ID: 0602306

July 9, 2021

Lab Assignment 11 - Functions, Loops, and Decisions

Write a function, sumConsonants, that takes two uppercase letters as arguments and outputs a sum of all the ascii values of the consonants between the starting and ending character
*/

#include <iostream>

using namespace std;

int sumConsonants(char first, char second);

int main()
{
	char first, second;
	cout << "Enter two uppercase letters" << endl;
	cin >> first >> second;

	cout << "The sum of the consonants between the two chars is " << sumConsonants(first, second) << endl;

	return 0;
}

int sumConsonants(char first, char second)
{
	char start, end;
	int sum = 0;
	if (islower(first) || islower(second))
		return -1;	// returns -1 if either of the arguments are lowercase

	if (first < second) 
	{
		start = first;	// If the first character comes before the second character, then the first character is where the loop starts
		end = second;
	}
	else
	{
		start = second; // If teh second character coems before the first character, then the second character is where the loop starts
		end = first;
	}

	for (char i = start; i < end; i++)
	{
		//cout << i << endl;
		//cout << static_cast<int>(i) << endl;

		if (!(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U'))	// Using the ! sign so that if i is a vowel, the body will not be executed instead of executed
			sum += static_cast<int>(i);
			//cout << sum << endl;
	}

	return sum;
}