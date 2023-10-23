#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index- function that returns the nth node
 * @head: pointer to the head
 * @index:  index of the node, starting at 0
 * Return: nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *s = head;

	x = 0;

	while (s && x < index)
	{
		s = s->next;
		x++;
	}
	return (s ? s : NULL);
}

