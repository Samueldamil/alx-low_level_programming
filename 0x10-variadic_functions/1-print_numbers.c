#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers followed by a new line
 * @n: number of integers passed to the function
 * @separator: is the string to printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;

	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(num, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);

	putchar('\n');
}
