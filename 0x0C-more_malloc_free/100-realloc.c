#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space
 * @new_size: size of the new memory block
 * Return: pointer to the memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *xptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		xptr = malloc(new_size);
		if (xptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		xptr = malloc(new_size);
		if (xptr == NULL)
			return (xptr);
		for (i = 0; i < old_size; i++)
			xptr[i] = *((char *)ptr + i);
		free(ptr);
	}
	return (xptr);
}
