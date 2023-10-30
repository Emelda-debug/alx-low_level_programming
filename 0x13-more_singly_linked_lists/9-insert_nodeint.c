#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index- function that
 * inserts a new node at a given position
 * @head: pointer
 * @idx: location where index will be added
 * @n: element to be inserted
 * Return: new node address of NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *node;
	listint_t *s = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (x = 0; s && x < idx; x++)
	{
		if (x == idx - 1)
		{
			node->next = s->next;
			s->next = node;
			return (node);
		}
		else
		{
			s = s->next;
		}
	}

	return (NULL);
}

