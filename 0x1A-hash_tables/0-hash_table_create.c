#include "hash_tables.h"

/**
  * hash_table_create - create a hash table with @size
  * @size: hash table size
  *
  * Return: address of the hash table or Null
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **)calloc(ht->size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	return (ht);
}
