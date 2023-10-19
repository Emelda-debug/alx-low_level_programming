#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list- function that frees a list_t list
 * @head: pointer to first element
 * Return: freed list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
			free(head);
		}
	}
}
