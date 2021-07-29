#include <iostream>
#include "ToDo.h"

using std::cout;
using std::endl;

const int maxSize = 100;
MyToDo toDoList[maxSize];
int size = 0;
int next = 0;

bool addToList( MyToDo &addToList)
{
	if (size < maxSize)
	{
		toDoList[size] = addToList;
		size++;
		return true;
	}
	else 
	{
		return false;
	}
}

bool addToList(string desc, string date, int priority)
{
	MyToDo toDo;
	toDo.description = desc;
	toDo.dueDate = date;
	toDo.priority = priority;
	return addToList(toDo);
}

bool getNextItem(MyToDo &nextItem)
{
	if (size == 0)	
		return false;
	if (next >= 0)
	{
		if (next >= maxSize)
			next = 0;
		nextItem = toDoList[next];
		next++;
		return true;
	}
}

bool getNextItem(string &desc, string &date, int &priority)
{
	MyToDo toDo;
	bool success = getNextItem(toDo);
	if (success)
	{
		desc = toDo.description;
		date = toDo.dueDate;
		priority = toDo.priority;
	}
	return success;
}

bool getByPriority(MyToDo list[], int priority)
{
	if (size == 0)
		return false;
	
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (toDoList[i].priority == priority)
		{
			list[count] = toDoList[i];
			count++;
		}
	}
	
	if (count > 0)
		return true;
	
	return false;
}

void printToDo()
{
	for (int i = 0; i < size; i++)
	{
		cout << "Description: " << toDoList[i].description << endl;
		cout << "Due Date: " << toDoList[i].dueDate << endl;
		cout << "Priority: " << toDoList[i].priority << endl;
	}
}
