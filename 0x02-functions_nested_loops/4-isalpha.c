#include "main.h"
/**
 * _isalpha - check alphabetic character
 * @c: is c integer arguments
 * Return: 0
 */
int _isalpha(int c)
{
	
	if (c >= 97 && c <= 122);
	{
		return (0);
	}
	else if (c >= 65 && c <= 90);
	{
		return (1);
	}
	return (0);
}
