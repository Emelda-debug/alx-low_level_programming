#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to head
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *s;
	int x;

	if (!head || !*head)
	{
		return (0);
	}

	x = (*head)->n;
	s = (*head)->next;
	free(*head);
	*head = s;
	return (x);
}
