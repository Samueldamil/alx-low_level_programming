#include "lists.h"
/**
 * list_len - calculate the number of elements
 * @h: pointer to a list
 * Return: int
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
