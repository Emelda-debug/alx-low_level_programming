#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint- function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer
 * @n: element to be added
 * Return: new eleemnt address or NULL for failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;

	*head = node;
	return (node);
}


