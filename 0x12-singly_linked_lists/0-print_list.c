#include <stdio.h>
#include "lists.h"
/**
 * print_list- function that prints all the elements of a list_t list
 * @h: pointer to first element in the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h->str)
	{
		printf("[0] (nil)");
	}

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}

