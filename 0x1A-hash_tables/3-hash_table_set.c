#include "hash_tables.h"

/**
  * hash_table_set - insert an element to the hash table
  * @ht: pointer to the hash table
  * @key: string key
  * @value: strin value corresponding to the key
  *
  * Return: 1 when success, otherwise 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *cursor, *last_node, *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	last_node = ht->array[index];
	cursor = ht->array[index];
	while (cursor != NULL)
	{
		if (strcmp(cursor->key, key) == 0)
		{
			if (cursor->key != NULL)
				free(cursor->key);
			cursor->key = strdup(key);
			if (cursor->value != NULL)
				free(cursor->value);
			cursor->value = strdup(value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		last_node = cursor;
		cursor = cursor->next;
	}
	last_node->next = new_node;
	return (1);
}
