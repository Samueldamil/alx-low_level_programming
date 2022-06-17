#include "main.h"
/**
 * print_number - print an integer
 * @n : integer
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_purchar((n % 10) + '0');
}
