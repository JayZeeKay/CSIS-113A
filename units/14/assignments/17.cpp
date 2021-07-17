/*
Jacob Marinas

ID: 0602306

July 17, 2021

Lab Assignment 17 - Tic-Tac-Toe

Construct a console based tic-tac-toe application that will thoroughly exhaust the various usages of 2D arrays
*/

#include <iostream>

using namespace std;

void createGameBoard(char board[][3], int size);
void printBoard(char board[][3], int size);
bool markSpace(char board[][3], int row, int col);
bool gameOver(char board[][3], char &result);

int main()
{
	char board[3][3];		// The board to play on
	bool finished = false;		// The state of the game, whether it is finished or not
	int x, y;			// Coordinates of where to place the marking
	int count = 0;			// Turn count
	char winner = ' ';		// The winner of the game, based on if conditions are met

	// Create the game board	
	createGameBoard(board, 3);

	// Print board to screen
	printBoard(board, 3);

	while (finished == false)
	{
		// Get coordinate input
		cout << "Enter the position that you want to place your mark" << endl;
		cin >> x >> y;
		// Mark the space
		markSpace(board, y - 1, x - 1);
		// Print the board with the new mark
		printBoard(board, 3);
		// Increase the turn count
		count++;
		// gameOver will check if the game has finished
		finished = gameOver(board, winner);
		if (finished && count < 9)
		{
			cout << "The winner of the game is " << winner << endl;
		}
		else if (count == 9)	// If the turn count becomes 9, and gameOver returns false, it means the game was tied
		{
			cout << "We have a tie game!" << endl;
			break;
		}	
	}

	return 0;
}

void createGameBoard(char board[][3], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			board[row][col] = '-';	// Assigning each row and column of the board to '-' when starting the game
		}
	}
}

void printBoard(char board[][3], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			cout << board[row][col] << "\t";
		}
		cout << endl;
	}
}

bool markSpace(char board[][3], int row, int col)
{
	static bool xTurn = false;
	xTurn = !xTurn;	// This is to alternate between player turns each time the function is called
	if (board[row][col] == '-')
	{
		if (xTurn)
			board[row][col] = 'X';
		else
			board[row][col] = 'O';
		system("CLS");
		return true;
	}
	return false;
}

bool gameOver(char board[][3], char &result)
{
	// Checks all the different combinations 
	char winner = ' ';
	// Left diagonal
	if (board[0][0] != '-' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		winner = board[0][0];
	}
	// Right diagonal
	else if (board[2][0] != '-' && board[2][0] == board[1][1] && board[1][1] == board[0][2])
	{
		winner = board[2][0];
	}
	else
	{
		// Rows
		for (int row = 0; row < 3; row++)
		{
			if (board[row][0] != '-' && board[row][0] == board[row][1] && board[row][1] == board[row][2])
			{
				winner = board[row][0];
				break;
			}
		}
		// Columns
		for (int col = 0; col < 3; col++)
		{
			if (board[0][col] != '-' && board[0][col] == board[1][col] && board[1][col] == board[2][col])
			{
				winner = board[0][col];
				break;
			}
		}
	}
	if (winner == ' ')
	{
		return false;	// If winner was never assigned, there is still no winner so return false so that finished bool is false, meaning game is not finished
	}
	else
	{
		result = winner;	// The result of the game is based on what conditions were met, returns true so that finished bool is true, game has finished
		return true;
	}
}

