#include "hash_tables.h"

/**
  * hash_table_delete - delete(free memory) hash table
  * @ht: point to the hash table
  * 
  * Return : Nothing
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cursor, *tmp;

	if (ht == NULL)
		return;
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			cursor = ht->array[i];
			while (cursor != NULL)
			{
				tmp = cursor->next;
				free(cursor->key);
				free(cursor->value);
				cursor->next = NULL;
				free(cursor);
				cursor = tmp;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
