#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - return the sum of all the data in list
 * @head: Address of the first node
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
