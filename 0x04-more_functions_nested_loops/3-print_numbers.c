#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 * Return: 0
 */

int void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
