#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end- function that adds a new node at the end of a list
 * @head: pointer to head
 * @n: element to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temporary = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temporary->next)
	{
		temporary = temporary->next;
	}

	temporary->next = node;
	return (node);
}
