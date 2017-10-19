// lab120.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter a positive integer: ";
	cin >> n;

	for (int i = 1; i <= 10; ++i) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
	system("pause");
	return 0;
}
