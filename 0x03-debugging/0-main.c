#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

void positive_or_negative(void)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return 0;
}