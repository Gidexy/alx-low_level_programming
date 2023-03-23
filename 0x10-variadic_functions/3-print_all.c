#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @ap: ap
 **/

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints int
 * @ap: ap
 **/
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float
 * @ap: ap
 **/
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 * @ap: ap
 **/
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 **/
void print_all(const char * const format, ...)
{
	char *separator = "";
	int a, j = 0;
	va_list ap;

	datatype choice[] = {{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}};

	/* iterate format; if datatype matched, access function via struct */
	va_start(ap, format);
	while (format != NULL && format[j] != '\0')
	{
		a = 0;
		while (choice[a].letter != '\0')
		{
			if (choice[a].letter == format[j])
			{
				printf("%s", separator);
				choice[a].func(ap);
				separator = ",";
			}
			a++;
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
