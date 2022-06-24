#include <stdio.h>
/**
 * main - print all arguments it receives
 * @argc: number of arguments
 * @argc: array to the pointer of a string
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
