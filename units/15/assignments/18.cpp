/*
Jacob Marinas

ID: 0602306

July 23, 2021

Lab Assignment 18 - Using Pointers

Using pointers write a function called removeChar that will remove each instance of a specified character from a CString
*/

#include <iostream>

using namespace std;

int removeChar(char phrase[], char remove);

int main()
{
	char str[100];
	char remove = ' ';

	cout << "Enter a phrase into the keyboard" << endl;
	cin.getline(str, 99);

	cout << "Enter a character to remove" << endl;
	cin >> remove;

	cout << "Removed " << removeChar(str, remove) << " " << remove << " characters. Your string is now: " << endl;
	cout << str;
	return 0;
}

int removeChar(char phrase[], char remove) 
{
	int count = 0;
	char *p = phrase;	// Using the * operator gets the contents of phrase. phrase[] is just a pointer to the first element

	while (*p)		// While the pointer is pointing at anything other than 0, which will happen at the end of the CString
	{
		if (*p == remove)	// Checks if the char the pointer is pointing at is the same as the char to remove
		{
			*p = ' ';	// Replace the char the pointer is pointing at to a space
			count++;
		}
		*p++;
	}
	return count;
}