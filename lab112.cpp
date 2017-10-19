// lab112.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char c;
	cout << "Enter a character: ";
	cin >> c;
	cout << "ASCII Value of " << c << " is " << int(c);
	system("pause");
	return 0;
	
}

