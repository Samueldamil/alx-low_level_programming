/**
 * *_strchr - locate the character in a string
 * @s : pointer to the constant
 * @c : constant
 * Return : s
 */
char *_strchr(char *s, char c)
{
	int i;

	for(i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		return ('\0');
	}
}
