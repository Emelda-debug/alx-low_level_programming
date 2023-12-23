#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value to add the element
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int inx = 0;
	char *value2, *key2;
	hash_node_t  *b, *node2;

	if (!ht || !key || !*key || !value)
	{
		return (0);
	}
	value2 = strdup(value);
	if (!value2)
	{
		return (0);
	}
	inx = key_index((const unsigned char *)key, ht->size);
	b = ht->array[inx];
	while (b)
	{
		if (!strcmp(key, b->key))
		{
			free(b->value);
			b->value = value2;
			return (1);
		}
		b = b->next;
	}
	node2 = calloc(1, sizeof(hash_node_t));
	if (node2 == NULL)
	{
		free(value2);
		return (0);
	}
	key2 = strdup(key);
	if (!key2)
	{
		return (0);
	}
	node2->key = key2;
	node2->value = value2;
	node2->next = ht->array[inx];
	ht->array[inx] = node2;
	return (1);
}
