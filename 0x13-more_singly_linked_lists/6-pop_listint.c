#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: pointer to a list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
