#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitalise all the strings
 * @s : pointer to the strings
 * Return: string
 */
char *cap_string(char *s)
{
	int j, k;
	char symb[] = " \t\n,;.!?\"(){}"

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
			s[j] = s[j] - 32;
			for (k = 0; symb[k] != '\0'; k++)
				if (s[j] == symb[k] && s[j + 1] >= 97 && s[j + 1] <= 122)
					s[j + 1] = s[j + 1] - 32;
	
	}
	return (s);
}
		
		
