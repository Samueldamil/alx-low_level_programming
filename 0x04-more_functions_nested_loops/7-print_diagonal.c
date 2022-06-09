#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n : number of \ to be printed
 * Return: 0
 */
void print_duagonal(int n)
{
	int i = 0;
	
	while (i < n && n > 0)
	{
		_putchar('\');
		i++;
	}
	_putchar('\n');
}
