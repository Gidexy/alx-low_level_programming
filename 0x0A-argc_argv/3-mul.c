#include <stdio.h>
#include <stdlib.h>

/**
 * main- main functiin
 *@argc: argument count
 *@argv: argument array
 * Return: return 0
**/

int main(int argc, char *argv[])
{
	int a, b;

	if (argc > 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);

		return (0);
	}
	else if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
}
