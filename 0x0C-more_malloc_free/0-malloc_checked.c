#include <stdlib.h>
/**
 * *memory_checked - allocate memory using malloc
 * @b: int
 * Return: pointerto the  array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);
	
	if (m == 0)
		exit (98);
	return (m);
}
