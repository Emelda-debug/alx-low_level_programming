#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: A pointer to the hash table to print
 * Return: print nothinf if ht is null
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned char flag = 0;
	unsigned long int x;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			n = ht->array[x];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
				{
					printf(", ");
				}
				flag = 1;
			}
		}
	}
	printf("}\n");
}
