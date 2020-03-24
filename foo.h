#include <string>

using namespace std;

#ifndef foo_h
#define foo_h
class Foo
{
private:
	int number;
	string name;

public:
	Foo();
	Foo(int number, string name);
	void setNumber(int number);
	void setName(string name);
	int getNumber();
	string getName();
	Foo operator+(const Foo &other);
	string toString();
};

#endif