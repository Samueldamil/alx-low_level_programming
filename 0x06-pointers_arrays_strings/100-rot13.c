#include "main.h"
/**
 * *rot13 - encoding strings
 * @str: string
 *Return: string
 */
char *rot13(char *str)
{
	int i = 0, j;
	
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA";

	for (; str[i] != '\0'; i++)
	{
		for(j = 0; j <= 51; j++)
		{
			if (s[j] == str[i])
			{
				str[i] = s[j];
			}
		}
	}
	return (src);
}
