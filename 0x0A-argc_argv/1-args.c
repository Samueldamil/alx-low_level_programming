#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: array of pointer to the arguments
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("argc = %d\n", argc - 1);

	return (0);
}
