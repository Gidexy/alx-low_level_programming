#include "main.h"

/**
 *_abs- computw absolute integer value
 *@n: interger value
 *Return: 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
