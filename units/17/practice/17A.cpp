/*
Jacob Marinas

ID: 0602306

July 28, 2021

Guided Practice 17A - Constructors

How to work with the Constructor, the mechanism used to initialize the class when its created
*/

#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
	Player p("Jacob");
	cout << "The average is " << p.getAverage() << endl;
	cout << "The name of the player is " << p.getName() << endl;
	return 0;
}