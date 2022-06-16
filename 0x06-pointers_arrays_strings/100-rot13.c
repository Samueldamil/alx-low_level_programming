#include "main.h"
/**
 * *rot13 - encoding strings
 * @str: string
 *Return: string
 */
char *rot13(char *str)
{
int i, ii;
char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
	for (ii = 0; ii < 54; ii++)
	{
		if (((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A'))
		&& s[i] == input[ii])
		{
			str[i] = output[ii];
			break;
		}
	}
}
return (s);
}
