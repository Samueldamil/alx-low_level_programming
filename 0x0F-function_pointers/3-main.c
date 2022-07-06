#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int arc, char *argv[])
{
	int num1, num2, (*operate)(int, int);

	if (arc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if ((*arg[2] != '+' && *arg[2] != '-' && *arg[2] != '*' && *arg[2] != '/' && *arg[2] != '%') || *arg[2][1] != '\0')
	{
		printf("Error\n");
		exit (99);
	}
	num1 = atoi(arg[1]);
	num2 = atoi(arg[3]);
	if ((*arg[2] ==  '/' || *arg[2] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit (100);
	}
	operate =  get_op_func(arg[2]);
	printf("%d\n", operate(num1, num2));
	return (0);
}
