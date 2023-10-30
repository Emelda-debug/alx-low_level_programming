#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint- function that prints all the elements of a list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}



