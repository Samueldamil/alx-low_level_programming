#include "main.h"
/**
 * *rot13 - encoding strings
 * @str: string
 *Return: string
 */
char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
