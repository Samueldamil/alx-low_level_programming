#include <stdlib.h>
#include "main.h"
/**
 * *array_range - crete array of integers
 * @min : minimum value
 * @max : maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int range = 0;
	int i;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
		p[i] = min + i;
	return (p);
}
