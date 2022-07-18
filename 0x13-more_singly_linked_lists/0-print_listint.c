#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of listint_t list
 * @h: pointer to a list
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *l;
	unsigned int c = 0;

	l = h;
	while (l != NULL)
	{
		printf("%d\n", l->n);
		c++;

		l = l->next;
	}
	return (c);
}
