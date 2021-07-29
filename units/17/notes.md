# Unit 17 - Constructors

## Constructors

### What is this

* The this pointer is a special type of pointer that referse to members of the class it is contained within
  * Refers to itself

```cpp
#include <iostream>
#include "Rectangle.h"

void Rectangle::setValues(int length, int width)
{
   this->length = length;
   this->width = width;
}
int Rectangle::area()
{
   return this->length * this->width;
}
```

* Notice the formal parameters to the setValues function are named length and width
  * These are the same as the private variables of the class
  * By using the this pointer you can distinguish the variables that are a part of the class from local variables

```cpp
void Rectangle::setValues(int length, int width)
{
   length = length;
   width = width;
}
```

* This would simply assign the formal parameters to themselves
  * The this pointer will also come in handy when you need to return a reference to the class itself

### Constructor Basics

* A class is really a blueprint for an object
  * The constructors is the factory that builds the object

```cpp
//Rectangle.h
#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
private:
   int length, width;

public:
   void setValues(int len, int wid);
   int area();
};

#endif
```

```cpp
//Rectangle.cpp

#include <iostream>
#include "Rectangle.h"

void Rectangle::setValues(int length, int width)
{
   this->length = length;
   this->width = width;
}

int Rectangle::area()
{
   return this->length * this->width;
}
```

```cpp
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
   Rectangle rect;
   cout << rect.area() << endl;
   
   return 0;
}
```

* In main if we were to create an instance of the rectangle, it would print some garbage
  * When variables are created, they contains whatever happens to be in the memory location at the time

* One solution is to call the setValues functions: `rect.setValues(5,7);`
  * Which works but it required two function calls to simply set up the variables

* The constructor is a special function that gets called when the object gets created
  * It gets called automatically, you don't have to do anything
  * If a constructor is not supplied, the compiler will create one for you

### Three Things you need to Know

* Constructors are always defined as public
  * It is possible to have a private constructor but there is no way to construct the object publically
* Constructors have the same name as the class
* Constructors have no return type not even void

```cpp
// Rectangle.h
#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
private:
int length, width;

public:
void setValue(int length, int width);
int area();
 
// Constructor definition,
Rectangle(); // Has same name as class, is public, no return type

};
```

```cpp
// Rectangle.h
#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
private:
int length, width;

public:
void setValue(int length, int width);
int area();
 
// Constructor definition,
Rectangle(); // Has same name as class, is public, no return type

};
```

### Initialization List

* In the above example the private field variables get set to 0 in the constructor
  * There is an alternate and preferred way to initalize variables called the initialization list
  * This section is right before the opening curly brace of the function

```cpp
ClassName::ConstructorName()
   :variableName(value)
{
  //Constructor body
}
```

* The colon designates the start of the initlaization list
  * Parentheses instead of equal sign is used to assign the value
  * To set multiple values, they should be separated by a comma

```cpp
#include "Rectangle.h"

Rectangle::Rectangle()
:length(1), width(1) // Initialization List
{
  
}
void Rectangle::setValues(int length, int width)
{
   this->length = length;
   this->width = width;
}
int Rectangle::area()
{
   return this->length * this->width;

}
```

### Initialize Data within Header

* While not recommended it is possible to write code in the header file
  * Should only do this when the function you're writing consists of very small amounts of code
  * Initializing the private variables in the constructor is often seen

```cpp
#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
private:
int length, width;

public:
   void setValues(int len, int wid);
   int area();

   //Constructor code placed inside the header file
   Rectangle() : length(1) ,width(1){}
}
#endif
```

* If you put the code inside the header file, it should not be in the .cpp file
  * It would otherwise cause a multiple definition error
* Since you are actually putting the function inside the header file, you also need to make sure the braces are correct
  * All the code is placed on one single line but it is valid function syntax

```cpp
#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
private:
int length, width;

public:
   void setValues(int len, int wid);
   int area();
   
   Rectangle();
   //Overloaded constructor
   Rectangle(int len, int wid); 
}
#endif
```

```cpp
// Default Constructor
Rectangle::Rectangle()
   : length(1), width(1)
{



}
//Overloaded Constructor
Rectangle::Rectangle(int len, int wid)
   : length(len), width(wid);
{


}
```

* You typically want to create constructors that allow the data section to be initialized in any way possible

### Creating Instances

* Now you can construct the Rectangle objects in two different ways

```cpp
int main()
{
   Rectangle rect;
   Rectangle rec(5, 6);

   return 0;
}
```

### Default Constructor / Working Constructor

* The constructor that has no arguments is called the default constructor
* The working constructor is the constructor that takes on all of the possible settings at once

```cpp
#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
private:
int length, width;

public:
   void setValues(int len, int wid);
   int area();
   
   //Overloaded constructor
   Rectangle();   
   Rectangle(int len);
   Rectangle(int len, int wid); 
}
#endif
```

```cpp
// Default Constructor
Rectangle::Rectangle()
   : length(1), width(1)
{



}
Rectangle::Rectangle(int len)
:length(len), wid(1)
{

}
Rectangle::Rectangle(int len, int wid)
   : length(len), width(wid);
{

}
```

### Constructor Notes

* You call the overloaded constructor like this:

`Rectangle rect(2,3);`

* But you don't call the default constructor like this:

`Rectangle rec();`

* The compiler will see this as a function prototype of a function called rec that has no arguments and returns a Rectangle object
  * This is the reason the default constructor is called without the use of parentheses

`Rectangle rect;`

* You cannot recall a constructor after the object is created

* One thing you can do is make an explicit constructor call:

`Rectangle rect(3,5);`

`r = Rectangle(4,5);`

* The above code creates an anonymous object; it is returning an object that has no name or reference
  * The object gets assigned back on top of the previously created Rectangle object

* If you do not supply a default constructor, the compiler will create one for you
  * But if you have an overloaded constructor, you are also going to have to create a default constructor

