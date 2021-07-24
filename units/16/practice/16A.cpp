/*
Jacob Marinas

ID: 0602306

July 23, 2021

Guided Practice 16A - Structs

How to create a struct, to create our own complex types
*/

#include <iostream>

using namespace std;

struct Player
{
	char Name[50];
	double average;
};

void getPlayerAverage(Player *plr);
void printPlayerAverage(Player p);

int main()
{
	Player p[3];	// Initializing an array of Player structs

	for (int i = 0; i < 3; i++) 
	{
		getPlayerAverage(&p[i]);	// Accessing each element in Player struct array with for loop, passing by address reference
	}
	for (int i = 0; i < 3; i++) 
	{
		printPlayerAverage(p[i]);	// Passing by value as shown in the video 
	}

	return 0;
}

void getPlayerAverage(Player *plr)
{
	cout << "Enter the player's name" << endl;
	cin >> plr->Name;

	cout << "Enter the player's average" << endl;
	cin >> plr->average;
}

void printPlayerAverage(Player p)
{
	cout << p.Name << " is hitting " << p.average << endl;
}


