// lab15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;

int main()
{
	int a = 5, b = 10, temp;

	cout << "Before swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "\nAfter swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;
	system("pause");
	return 0;
}
