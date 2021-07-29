#include <iostream>
#include "Player.h"

Player::Player()
	:Player("", 0.0)
{

}

Player::Player(string name)
	:Player(name, 0.0)
{
	// Passing the name to the working constructor, default to 0.0 for the average
}

Player::Player(string name, double average)
{
	this->setPlayer(name, average);
}

void Player::setPlayer(string Name, double avg)
{
	this->average = avg;
	this->Name = Name;
}

double Player::getAverage()
{
	return this->average;
}

string Player::getName()
{
	return this->Name;
}

