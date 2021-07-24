/*
Jacob Marinas

ID: 0602306

July 23, 2021

Lab Assignment 19 - Structures and Arrays

Construct functionality to create a simple To Do list
*/

#include <iostream>
#include <string>
#include "ToDo.h"

using namespace std;

int main()
{

	MyToDo toDo;

	cout << "Enter a description" << endl;
	cin >> toDo.description;

	cout << "Enter a date" << endl;
	cin >> toDo.dueDate;

	cout << "Enter a number priority" << endl;
	cin >> toDo.priority;

	addToList(toDo);
	return 0;
}