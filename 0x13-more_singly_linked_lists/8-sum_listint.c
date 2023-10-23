#include "lists.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * sum_listint- function that returns the sum of all the data
 * (n) of a listint_t linked list
 * @head: pointer
 * Return: sum of data or 0 for empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *s = head;

	while (s)
	{
		sum = sum + s->n;
		s = s->next;
	}
	return (sum);

}
