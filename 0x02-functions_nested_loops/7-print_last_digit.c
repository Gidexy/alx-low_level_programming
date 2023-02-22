#include "main.h"

/**
 *print_last_digit- prints small letter alphabets
 *@n: integer value
 *Return: 0
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar('0' + (n % 10));
	return (n % 10);
}
