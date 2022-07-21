#include "main.h"
/**
 * set_bit - set value of a bit to 1
 * @n: parameter
 * @index: index
 * Return: val
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
