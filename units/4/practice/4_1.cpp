#include <iostream>

using namespace std;

int main()
{
	char character;

	cout << "Enter a character" << endl;
	cin >> character;

	switch (character)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			cout << character << " is a vowel" << endl;
			break;
		default:
			cout << character << " is not a vowel" << endl;
	}

	return 0;
}