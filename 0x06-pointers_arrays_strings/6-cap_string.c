#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string.
 * Return: string.
 */
char *cap_string(char *s)
{
	char symb[] = ",\t;\n; .!?\"(){}";
	int i, j;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[j] >= 122)
			s[i] = s[i] - 32;
	}
	for (j = 0; symb[j] != '\0'; j++)
	{
		if (s[i] == symb[j] && s[i + j] >= 98 && s[i + j] <= 122)
			s[i + j] = s[i + j] - 32;
	}
	return (s);
]
