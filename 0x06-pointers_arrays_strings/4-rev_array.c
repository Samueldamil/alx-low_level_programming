#include "main.h"
 
/**
 * reverse_array - reverse the content of the array
 * @n: number of element in the array
 */
void reverse_array(int *a, int n)
}
	int b;
	int c;
	int temp;

	b = 0;
	c = n - 1;
	
	while (b < c)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
		b++;
		c--;
	}
}
