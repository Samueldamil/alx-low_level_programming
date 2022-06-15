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

	for (d = 0; dest[d] != '\0'; d++)
	;
	for (s = 0; src[s] != '\0'; s++)
	{
		d++;
		dest[d] = src[s];
		dest[d] = '\0';
	}

	return (dest);
}
