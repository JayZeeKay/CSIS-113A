#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	double number, rNumber, cNumber, fNumber, cResult, fResult;
	cout << "Enter a decimal number" << endl;
	cin >> number;

	cNumber = ceil(number);
	fNumber = floor(number);

	rNumber = rand() % 10 + 1;

	cResult = pow(cNumber, rNumber);
	fResult = pow(fNumber, rNumber);

	cout << "Rounded up, " << cNumber << " to the power of " << rNumber << " is " << cResult << endl;
	cout << "Rounded down, " << fNumber << " to the power of " << rNumber << " is " << fResult << endl;

	return 0;
}