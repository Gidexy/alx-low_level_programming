#include "main.h"

/**
 *print_alphabet- prints small letter alphabets
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	return (0);
}



