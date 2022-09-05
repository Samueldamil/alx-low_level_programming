#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s : string to check
 * @accept : character to match
 * Return : int
 */


unsigned int _strspn(char *s, char *accept)
{
	int i, j, sub = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				sub++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (sub);
}
