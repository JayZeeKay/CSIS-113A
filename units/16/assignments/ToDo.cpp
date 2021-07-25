#include <iostream>
#include "ToDo.h"

using namespace std;

bool addToList(const MyToDo &addToList)
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
	if (toDoList.empty())
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
	if (toDoList.empty())
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
