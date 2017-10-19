// lab12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int firstNumber, secondNumber, sumOfTwoNumbers;

	cout << "Enter two integers: ";
	cin >> firstNumber >> secondNumber;

	// sum of two numbers in stored in variable sumOfTwoNumbers
	sumOfTwoNumbers = firstNumber + secondNumber;

	// Prints sum 
	cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;
	system("pause");
	return 0;
}
