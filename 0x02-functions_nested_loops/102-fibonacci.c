#include <stdio.h>

/**
 *main- prints small letter alphabets
 *
 *Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
		printf("%li", a);
	putchar(',');
	putchar(' ');

	printf("\n");

	return (0);
}