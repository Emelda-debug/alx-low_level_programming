#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * looped_listint_len- function that counts number of unique nodes looped
 * in a  listint_t linked list
 * @head: pointer
 * Return: 0 if the list is not looped, else number of unique nodes
 */

size_t looped_listint_length(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = h;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t !=h)
			{
				nodes++;
				t = t->next;
			}
			
			return (nodes);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe- function that prints a listint_t linked list
 * @head: pointer
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node;
	size_t index = 0;
	node = looped_listint_length(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void*)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index< node; index++)
		{
			printf("[%p] %d\n",(void *)head, head->n);
			head = head->next;
		}
		printf("[%p] %d\n",(void *)head, head->n);
	}
	return (node);
}


