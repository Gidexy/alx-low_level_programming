#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if the given character is an uppercase letter.
 * @c: Charactee to be checkd
 * Return: 1 if its is an uppercase else 0 (False)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

