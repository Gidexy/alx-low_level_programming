#include "main.h"
#include <stdio.h>

/**
 * factorial - return string length
 * @n: string
 * Return: string length
 */

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0)
	{
		return 1;
	}
	return (n * factorial(n-1));
}
