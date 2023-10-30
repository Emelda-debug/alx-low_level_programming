#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2- function that frees a listint_t list
 * @head: pointer to the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *s;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		s = (*head)->next;
		free(*head);
		*head = s;
	}

	*head = NULL;
}
