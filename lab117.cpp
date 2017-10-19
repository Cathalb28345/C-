// lab117.cpp :17.	Write a C++ Program to convert chars 0-9 input from the keyboard into an integer number.
#include "stdafx.h"
#include <iostream>
#include "lab117.h"
using namespace std;

int main()
{
	char c;

	for (int a = 0; a < 9;a++)
	{
		cout << "Enter a Number: ";
		cin >> c;
		cout << "ASCII Value of " << c << " is " << (int)(c - 48) << "\n\n";
	}
	system("pause");return 0;
}
