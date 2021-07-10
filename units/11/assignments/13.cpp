/*
Jacob Marinas

ID: 0602306

July 9, 2021

Lab Assignment 13 - Using References

Write a function called decode that will decode a nine character string into three separate int value codes
*/

#include <iostream>
#include <string>

using namespace std;

bool decode(string str, int &a, int &b, int &c);

int main()
{
	int num1, num2, num3;
	string str;

	cout << "Enter a sequence to decode" << endl;
	cin >> str;

	if(decode(str, num1, num2, num3))	// Function returns true or false to branch the program to intended output
	{
		cout << "Your sequence decoded is " << endl;
		cout << "Num1 = " << num1 << endl;
		cout << "Num2 = " << num2 << endl;
		cout << "Num3 = " << num3 << endl;
	}
	else
	{
		cout << "The sequence is invalid" << endl;
	}
	
	return 0;
}

bool decode(string str, int &a, int &b, int &c)
{
	if (str.length() != 9)	// Catches when the string is not 9 characters long, returns false which in main will cout "The sequence is invalid"
		return false;
	for (int i = 0; i < 9; i++)
	{
		// Nested if statements to decide which of the three numbers to add the int value of char to, based on the character position in the string
		if (i < 3)	
			a += static_cast<int>(str.at(i));
		else if (i < 6)
			b += static_cast<int>(str.at(i));
		else
			c += static_cast<int>(str.at(i));
	}
	return true;
}

