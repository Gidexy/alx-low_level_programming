#include <stdio.h>
/**
 *main- prints a line of code using puts
 *
 *Return: 0
*/
int main(void)
{
  char a;
  int b;
  long int c;
  long long int d;
  float f;
printf("Size of a char: %2d byte(s)\n", sizeof(a));
printf("Size of an int: %2d byte(s)\n", sizeof(b));
printf("Size of a long int: %2d byte(s)\n", sizeof(c));
printf("Size of a long long int: %2d byte(s)\n", sizeof(d));
printf("Size of a float: %2d byte(s)\n", sizeof(f));
return (0);
}
