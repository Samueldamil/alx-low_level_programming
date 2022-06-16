#include "main.h"
 
/**
 * reverse_array - reverse the content of the array
 * @n: number of element in the array
 */
void reverse_array(int *a, int n)
}
	int b = 0;
	int c;
	
	for (c = n / 2; c > 0; c--; b++)
	{
		a[n - b - 1] += a[b];
		a[b] = a[n - b - 1] - a[b];
		a[n - b - 1] = a[n - b - 1] - a[b];
	}
}
