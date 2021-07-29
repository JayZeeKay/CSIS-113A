/*
Jacob Marinas

ID: 0602306

July 28, 2021

Guided Practice 16B - CLasses

How to create a Class, start working on our understanding of Object Oriented Programming
*/

#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
	Player p;
	p.setPlayer(.750, "Glenn");
	cout << "The average is " << p.getAverage() << endl;
	cout << "The name of the player is " << p.getName() << endl;
	return 0;
}


