#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - main block
 * Description: We will get a random number and print the number
 * if it is positive, negative, or zero
 * Return: 0
 */
Int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print("%i is positive\n", n);
	else if (n < 0)
		print("%i is negative\n", n);
	else
		print("%i is zero\n", n);
	return (0);
}
