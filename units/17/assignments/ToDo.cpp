//ToDo.cpp
#include <iostream>
#include "ToDo.h"

using std::cout;
using std::endl;

ToDoList::ToDoList()
{

}

ToDoList::ToDoList(string desc)
	:ToDoList(desc, "", 1)
{

}

ToDoList::ToDoList(string desc, string dueDate)
	:ToDoList(desc, dueDate, 1)
{

}

ToDoList::ToDoList(string desc, string dueDate, int priority)
{
	// Overloaded constructor that enters the description, due date, priority
	addToList(desc, dueDate, priority);
}

bool ToDoList::addToList(MyToDo &addToList)
{
	if (size < maxSize)
	{
		toDoList[size] = addToList;
		size++;		// Increases the size so that on the next call, the assignment is made to the next position in the list
		return true;
	}
	else 
	{
		return false;
	}
}

bool ToDoList::addToList(string desc, string date, int priority)
{
	MyToDo toDo;	// Creates an toDo struct that gets added onto the parameters for description, due date, priority
	toDo.description = desc;
	toDo.dueDate = date;
	toDo.priority = priority;
	return addToList(toDo);
}

bool ToDoList::getNextItem(MyToDo &nextItem)
{
	if (size == 0)	// The size is 0 if no items have been added to the list, so there is no "next item" to get and returns false
		return false;
	if (next >= 0)
	{
		if (next >= maxSize)
			next = 0;
		nextItem = toDoList[next];
		next++;
		return true;
	}
	return false;
}

bool ToDoList::getNextItem(string &desc, string &date, int &priority)
{
	MyToDo toDo;
	bool success = getNextItem(toDo);
	if (success)
	{
		desc = toDo.description;	// Assigns the variables the items' info, as the parameters are passed by reference
		date = toDo.dueDate;
		priority = toDo.priority;
	}
	return success;
}

bool ToDoList::getByPriority(MyToDo list[], int priority)
{
	if (size == 0)
		return false;
	
	int count = 0;

	for (int i = 0; i < size; i++)	// Simple for loop that checks when priority of an item matches the query
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

void ToDoList::printToDo()
{
	//cout << "printToDo()" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Description: " << toDoList[i].description << endl;
		cout << "Due Date: " << toDoList[i].dueDate << endl;
		cout << "Priority: " << toDoList[i].priority << endl;
	}
}
