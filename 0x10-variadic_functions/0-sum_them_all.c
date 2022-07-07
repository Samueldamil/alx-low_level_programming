#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum all arguments
 * @n: int, number of undefined arguments
 *
 * Return: sum of args
 * On error, 0 is returned
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
