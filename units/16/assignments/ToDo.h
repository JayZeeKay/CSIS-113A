#include <string>

#ifndef TODO
#define TODO

using std::string;

struct MyToDo 
{
	string description;
	string dueDate;
	string priority;
};

void addToList(MyToDo addToList);
bool addToList(string desc, string dueDate, int priority);
string getNextItem(MyToDo &nextItem);
void getNextItem(string &desc, string &date, int &priority);
MyToDo[] getByPriority(MyToDo toDoList[], int priority);

#endif

