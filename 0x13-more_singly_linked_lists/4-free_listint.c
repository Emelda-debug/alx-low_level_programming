#include <stdlib.h>
#include "lists.h"
/**
 * free_listint- function that frees a listint_t list
 * @head: pointer to list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *s;

	while (head)
	{
		s = head->next;
		free(head);
		head = s;
	}
}
