#include "main.h"
/**
 * get_bit - return the value of bit in a given index
 * @n: parameter
 * @index: index starting with 0
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
