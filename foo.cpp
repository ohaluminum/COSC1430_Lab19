#include "foo.h"
#include <sstream>

using namespace std;

Foo::Foo()
{
	number = 0;
	name = "null";
}

Foo::Foo(int number, string name)
{
	this->number = number;
	this->name = name;
}

void Foo::setNumber(int number)
{
	this->number = number;
}

void Foo::setName(string name) 
{
	this->name = name;
}

int Foo::getNumber()
{
	return number;
}

string Foo::getName()
{
	return name;
}

/*
 *The + operator will create the new Foo object that is the addition of two others by this criteria:
 *the number variable is the addition of the two number variables
 *the name variable is the concatenation of the other two with no additions
 */
Foo Foo::operator+(const Foo& other)
{
	Foo newFoo;

	newFoo.number = number + other.number;
	newFoo.name = name + other.name;

	return newFoo;
}

/*
 *The toString method returns a string with this format:
 *number + : + name
 */
string Foo::toString()
{
	string str;

	ostringstream outSS;
	outSS << number << ":" << name << endl;

	str = outSS.str();

	return str;
}
