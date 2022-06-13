#include "main.h"
/**
 * print_rev - print string in reverse
 * @s : pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while(s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
