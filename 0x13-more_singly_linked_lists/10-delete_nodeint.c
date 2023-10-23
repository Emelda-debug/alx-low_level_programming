#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index- function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer
 * @index: index to be deleted which starts at 0
 * Return: 1 if success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *s = *head;
	listint_t *c = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(s);
		return (1);
	}

	while (x < index - 1)
	{
		if (!s || !(s->next))
		{
			return (-1);
			s = s->next;
			x++;
		}

		c = s->next;
		s->next = c->next;
		free(c);
	}
	return (1);
}
