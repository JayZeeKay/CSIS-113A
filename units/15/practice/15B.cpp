/*
Jacob Marinas

ID: 0602306

July 22, 2021

Guided Practice 15B - Application of Pointers

How to apply pointers to solve problems
*/

#include <iostream>

using namespace std;

int xDigits(char *str, char change);

int main()
{	
	char change;
	cout << "Enter a character that you want each occurance of it to be replaced with x" << endl;
	cin >> change;
	char s[] = "Abc12cdextz99052ab";
	int cnt = xDigits(s, change);

	cout << "Modified " << cnt << " digits, here is your string " << endl;
	cout << s << endl;
	return 0;
}

int xDigits(char *str, char change)
{
	int count = 0;
	char *p = str;

	while (*p)
	{
		if (*p == change)	// If contents of pointer, a char, is equal to change, a char, change contents of pointer to 'x'
		{
			*p = 'x';
			count++;
		}
		p++;
	}
	return count;
}