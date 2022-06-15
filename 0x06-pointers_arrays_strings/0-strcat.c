#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		i++;
	}

	while (src[s] != '\0')
	{
		dest[d] = src[s];
		s++;
		d++;
	}

	dest[i] = '\0';
	return (dest);
}
