// lab16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int number;

	printf("Enter an integer: ");
	scanf_s("%d", &number);

	// True if the number is perfectly divisible by 2
	if (number % 2 == 0)
		printf("%d is even.", number);
	else
		printf("%d is odd.", number);
	
	return 0;
}
