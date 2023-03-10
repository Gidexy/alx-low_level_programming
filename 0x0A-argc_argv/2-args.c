#include <stdio.h>

/**
 * main- print all argument passed
 *@argc: argument count
 *@argv: argument array
 * Return: return 0
**/

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
