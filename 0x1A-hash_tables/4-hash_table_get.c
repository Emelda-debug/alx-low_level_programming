#include "hash_tables.h"
/**
 * hash_table_get- retrieves a value associated with a key
 * @ht: A pointer to the hash table
 * @key: the key
 * Return: value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int inx;
	hash_node_t *n;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	inx = key_index((const unsigned char *)key, ht->size);
	if (inx >= ht->size)
	{
		return (NULL);
	}
	n = ht->array[inx];
	while (n && strcmp(n->key, key) != 0)
	{
		n = n->next;
	}
	return ((n == NULL) ? NULL : n->value);
}
