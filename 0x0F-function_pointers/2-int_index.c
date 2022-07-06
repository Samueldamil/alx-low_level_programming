#include "function_pointers.h"
/**
 * int_index - searching for an integer
 * @array: array for int
 * @size: number of element in an array
 * @cmp: is a pointer to the function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
