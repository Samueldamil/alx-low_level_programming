#include "lists.h"
/**
 * listint_len - returns the number of element in linked
 * list
 * @h: pointer to a list
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
