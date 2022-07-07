#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: integer
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list plus;
	unsigned int i, sum = 0;

	va_start(plus, n);
	if (n != 0)
	for (i = 0; i < n; sum += va_arg(plus, unsigned int),i++)
		;
	va_end(plus);

	return (sum);
}
