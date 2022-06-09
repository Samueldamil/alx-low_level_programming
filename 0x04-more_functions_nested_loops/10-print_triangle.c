#include "main.h"
/**
 * print_triangle - check a digit
 * @size : integer type
 * Return: void
 */
void print_triangle(int size)
{
	int i, ii;
	
	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
