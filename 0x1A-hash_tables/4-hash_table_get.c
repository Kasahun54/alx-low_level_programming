#include "hash_tables.h"

/**
  * hash_table_get - get value from @key in the hash table
  * @ht: point to the hash table
  * @key: string key
  *
  * Return: if the @key found, or None
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cursor;

	index = key_index((unsigned char *)key, ht->size);
	cursor = ht->array[index];
	while (cursor != NULL)
	{
		if (strcmp(cursor->key, key) == 0)
			return (cursor->value);
		cursor = cursor->next;
	}
	return (NULL);
}

