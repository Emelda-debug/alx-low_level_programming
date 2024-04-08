#include "hash_tables.h"
/**
 * hash_table_create- function that creates a hash table
 * @size: array size
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_tbl;
	unsigned long int x;

	hsh_tbl = malloc(sizeof(hash_table_t));
	if (hsh_tbl == NULL)
	{
		return (NULL);
	}
	hsh_tbl->size = size;
	hsh_tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (hsh_tbl == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		hsh_tbl->array[x] = NULL;
	}
	return (hsh_tbl);
}
