#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s : string to check
 * @accept : character to match
 * Return : int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, index = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = p; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				index++;
			}
		}
	}
	return (index);
}
		