#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add new node at the beginning of list_t
 * @head: double pointer to the list_t
 * @str: new string
 *
 * Return: address of new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
