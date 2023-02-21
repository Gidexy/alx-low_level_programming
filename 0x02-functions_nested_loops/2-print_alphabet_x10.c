#include "main.h"

/**
 *print_alphabet_x10- prints small letter alphabets
 *
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int r;

	r = 0;

	while (r < 10)
	{
		char ch;

		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');

	r++;
	}
}
