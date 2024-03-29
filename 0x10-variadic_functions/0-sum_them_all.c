#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This is for getting the sum of all values in the parameter
 * @n: Only paramter for check
 * Return: retuns 0 and sum
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	/* validate valist and initialize */
	if (n == 0)
		return (0);
	va_start(ap, n);

	/* iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
