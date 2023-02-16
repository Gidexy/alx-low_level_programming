#include <stdio.h>
/**
 *main- prints a line of code using puts
 *
 *Return: 0
*/
int main(void)
{
printf("Size of a char: %2d byte\(s\) \n", sizeof(char));
printf("Size of an int: %2d byte\(s\) \n", sizeof(short int));
printf("Size of a long int: %2d byte\(s\) \n", sizeof(long int));
printf("Size of a long long int: %2d byte\(s\) \n", sizeof(long double int));
printf("Size of a float: %2d byte\(s\) \n", sizeof(float));
return (0);
}
