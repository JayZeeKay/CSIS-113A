#include <iostream>

using namespace std;

int main() 
{
	
	char character;

	cout << "Input a character" << endl;
	cin >> character;

	if (character >= 'a' && character <= 'z')
	{
		cout << "Your character is a lowercase letter" << endl;
	} 
	else if (character >= 'A' && character <= 'Z') 
	{
		cout << "Your character is an uppercase letter" << endl;
	} 
	else 
	{
		cout << "Your character is a digit" << endl;
	}

	return 0;

}