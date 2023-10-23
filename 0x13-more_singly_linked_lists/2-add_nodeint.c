#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end- function that adds a new node at the end of a list
 * @head: pointer to head pointer
 * @n: new element to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}

