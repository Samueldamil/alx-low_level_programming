#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1 - first string
 * @s2 - second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	for (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		comp = *s1 - *s2;

	return (comp);
}	
