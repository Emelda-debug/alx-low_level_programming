#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * listint_len- function that returns the number of elements in a linked list
 * @h: pointer to the header
 * Return: number of elements in a link
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
