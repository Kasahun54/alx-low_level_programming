#include "hash_tables.h"

/**
  * key_index - generate index with djb2 algorithm
  * @key: key string
  * @size: hash table size
  *
  * Return: index
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
