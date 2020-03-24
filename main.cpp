#include "foo.h"
#include <iostream>

using namespace std;

int main() {

	Foo tmp1;
	cout << tmp1.toString() << endl;

	Foo tmp2(5, "Foo");
	cout << tmp2.toString() << endl;

	Foo tmp3;
	tmp3 = tmp1 + tmp2;
	cout << tmp3.toString();


	return 0;
}