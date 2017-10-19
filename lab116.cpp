// lab116.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int convertBinaryToDecimal(long long);
int convertDecimalToBinary(long long);
int main()
{
	char n;	char n1;
	char Choice;

	cout << "Enter a 1 or 2: ";
	cin >> Choice;
	//for(Choice < 1 || > 2; Choice > 2; Choice++)
	//	{
			switch (Choice)
				{
					long long n;
					long long n1;
				case '1':
					cout << "Enter a binary number: ";
					cin >> n;
					cout << n << " in binary = " << convertBinaryToDecimal(n) << " in decimal\n\n";
					system("pause");
					break;
				case '2':
					cout << "\n\nEnter a Decimal number: ";
					cin >> n1;
					cout << n1 << " in Decimal = " << convertDecimalToBinary(n1) << " in Binary\n\n";
					convertDecimalToBinary(n1);
					system("pause");
					break;

				default:
					cout << "Invalid number" << endl;
					system("pause");
					return 0;
				}
	//	}
	
}
int convertBinaryToDecimal(long long n)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
		{
			remainder = n % 10;
			n /= 10;
			decimalNumber += remainder*pow(2, i);
			++i;
		}
	
	return decimalNumber;
	system("pause");
}
int convertDecimalToBinary(long long n1)
{
	int BinaryNumber = 0, i = 1, remainder;
	while (n1 != 0)
		{
			remainder = n1 % 2;
			n1 = n1 / 2;
			BinaryNumber += remainder *= i;
			i = i * 10;
		}

	return BinaryNumber;
}