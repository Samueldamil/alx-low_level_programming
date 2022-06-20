#include "main.h"
/**
 * *_strpbrk - searches for a string
 * @s : string
 * @accept : string to match
 * Return : 's' or NULL if no byte os found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (i != '\0')
	{
		j = 0;
		while (j != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
