#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop- function that finds the loop in a linked list
 * @head: pointer
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
	{
		return (NULL);
	}
	while (x && y && y->next)
	{
		x = x->next->next;
		y = y->next;
		if (x == y)
		{
			y = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (x);
		}
	}
	return (NULL);
}


