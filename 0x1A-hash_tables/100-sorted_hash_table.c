#include "hash_tables.h"
/**
 * shash_table_create- function to create a sorted hash table
 * @size: new hash table size
 * Return: pointer to the new sorted hash table or NULL for failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h;
	unsigned long int x;

	h = malloc(sizeof(shash_table_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->size = size;
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		h->array[x] = NULL;
	}
	h->shead = NULL;
	h->stail = NULL;
	return (h);
}
/**
 * shash_table_set- function to add new element
 * @ht: pointer to hash table
 * @key: key to add
 * @value: key value
 * Return: 0 for failure otherwise 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *element2, *temp;
	char *value2;
	unsigned long int inx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	value2 = strdup(value);
	if (value2 == NULL)
	{
		return (0);
	}
	inx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value2;
			return (1);
		}
		temp = temp->snext;
	}
	element2 = malloc(sizeof(shash_node_t));
	if (element2 == NULL)
	{
		free(value2);
		return (0);
	}
	element2->key = strdup(key);
	if (element2->key == NULL)
	{
		free(value2);
		free(element2);
		return (0);
	}
	element2->value = value2;
	element2->next = ht->array[inx];
	ht->array[inx] = element2;
	if (ht->shead == NULL)
	{
		element2->sprev = NULL;
		element2->snext = NULL;
		ht->shead = element2;
		ht->stail = element2;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		element2->sprev = NULL;
		element2->snext = ht->shead;
		ht->shead->sprev = element2;
		ht->shead = element2;
	}
	else
	{
		temp = ht->shead;		
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
		{
			temp = temp->snext;
		}
		element2->sprev = temp;
		element2->snext = temp->snext;
		if (temp->snext == NULL)
		{
			ht->stail = element2;
		}
		else
		{
			temp->snext->sprev = element2;
		}
		temp->snext = element2;
	}
	return (1);
}
/**
 * shash_table_get- retriieve key value
 * @ht: pointer to table
 * @key: key
 * Return: key value else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int inx;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	inx = key_index((const unsigned char *)key, ht->size);
	if (inx >= ht->size)
	{
		return (NULL);
	}
	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
	{
		nd = nd->snext;
	}
	return ((nd == NULL) ? NULL : nd->value);
}
/**
 * shash_table_print- Prints a sorted hash table in order
 * @ht: pointer to table
 * Return: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
	{
		return;
	}
	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
		{
			printf(", ");
		}
		printf("}\n");
	}
}
/**
 * shash_table_print_rev- prints a sorted hash table in reverse order
 * @ht: pointer to table
 * Return: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
	{
		return;
	}
	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
/**
 * shash_table_delete- deletes a hash tabble
 * @ht: pointer to table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *nd, *temp;

	if (ht == NULL)
	{
		return;
	}
	nd = ht->shead;
	while (nd)
	{
		temp = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = temp;
	}
	free(head->array);
	free(head);
}

