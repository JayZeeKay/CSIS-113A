#include <iostream>
#include <ctime>

using namespace std;

int getEvenRand();

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < 20; i++)
	{
		cout << "A random even number is " << getEvenRand() << endl;
	}

	return 0;
}

int getEvenRand()
{
	int num = rand() % 101;

	while (num % 2 != 0)
	{
		num = rand() % 101;
	}
	return num;
}

