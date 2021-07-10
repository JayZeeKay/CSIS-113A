/*
Jacob Marinas

ID: 0602306

July 9, 2021

Lab Assignment 14 - Overloaded Functions

Write overloaded sumAscii functions, one which takes a single string argument, the second which takes two string arguments
The two functions should return the sum of all of the ASCII characters within the string argument(s).
*/

#include <iostream>
#include <string>

using namespace std;

int sumAscii(string str);
int sumAscii(string str1, string str2);

int main()
{
	string first, second;
	cout << "Enter two strings" << endl;
	
	getline(cin, first);	// Can't use cin >>, to get a string requires the getline function
	getline(cin, second);

	cout << "The sum of the ascii characters in both strings is " << sumAscii(first, second) << endl;
	return 0;
}

int sumAscii(string str)
{
	int sum;
	for (int i = 0; i < str.length(); i++)
	{
		sum += static_cast<int>(str.at(i));	// For each character in string, convert to int and add that value to sum
	}
	return sum;
}

int sumAscii(string str1, string str2)
{
	return sumAscii(str1) + sumAscii(str2);	// Using the simpler function and adding the two returned values together
}