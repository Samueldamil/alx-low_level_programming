#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - deallocate the list
 * @head: pointer to list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
