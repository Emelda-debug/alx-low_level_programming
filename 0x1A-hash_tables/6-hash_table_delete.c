#include "hash_tables.h"
/**
 * hash_table_delete - function to delete a hash table
 * @ht: A pointer to hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *n, *temp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			n = ht->array[x];
			while (n != NULL)
			{
				temp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = temp;
			}
		}
	}
	free(head->array);
	free(head);
}


