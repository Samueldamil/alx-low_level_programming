#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print strings followed by a new line
 * @n: number of strings passed to the function
 * @separator: string printed between the string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *c;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(str, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(str);

	putchar('\n');
}
