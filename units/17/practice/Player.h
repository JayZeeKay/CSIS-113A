#include <string>

using std::string;

#ifndef PLAYER
#define PLAYER

class Player 
{
	private:
		string Name;
		double average;
	public:

		Player();
		Player(string name);
		Player(string name, double average);

		void setPlayer(string Name, double average);
		double getAverage();
		string getName();
};

#endif