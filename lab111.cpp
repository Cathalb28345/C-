// lab111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, reversedNumber = 0, remainder;

	cout << "Enter an integer: ";
	cin >> n;

	while (n != 0)
	{
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}

	cout << "Reversed Number = " << reversedNumber;
	system("pause");
	return 0;
}

