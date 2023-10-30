#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe- function that frees a listint_t list
 * @h: double pointer
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int d;
	listint_t *s;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			s = (*h)->next;
			free(*h);
			*h = s;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}

