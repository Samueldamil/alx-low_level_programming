/**
 * _memcpy - copy memory area from source to destination
 * @src: source file
 * @dest: destination file
 * @n : memory area
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;


	for (index = 0; index < n; index++)
		*(dest + index) = *(src + index);
	return (dest);
}
