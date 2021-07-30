// ToDo.h
#ifndef TODO
#define TODO

#include <string>

using std::string;

struct MyToDo
{
	string description;
	string dueDate;
	int priority;
};

class ToDoList 
{
	private:
		const int maxSize = 100;
		MyToDo toDoList[100];
		int next = 0;
		int size = 0;
	public:
		ToDoList();
		ToDoList(string desc);
		ToDoList(string desc, string dueDate);
		ToDoList(string desc, string dueDate, int priority);
		bool addToList(MyToDo &addToList);
		bool addToList(string desc, string dueDate, int priority);
		bool getNextItem(MyToDo &nextItem);
		bool getNextItem(string &desc, string &date, int &priority);
		bool getByPriority(MyToDo toDoList[], int priority);
		void printToDo();
};

#endif
