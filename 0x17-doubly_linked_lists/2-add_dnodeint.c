#include "lists.h"
/**
 * add_dnodeint- function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: double pointer to head
 * @n: value of node to be added
 * Return: new element or NULL for failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	new_node->next = h;
	if (h != NULL)
	{
		h->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}


