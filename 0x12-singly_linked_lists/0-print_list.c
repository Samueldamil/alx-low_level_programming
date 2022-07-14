#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a list
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		n_nodes++;
	}
	return (n_nodes);
}
