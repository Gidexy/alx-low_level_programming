#include "main.h"
/**
 *_islower- prints small letter alphabets
 *@c: for character input
 *Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
