#include "main.h"

/**
 * get_bit - gets bit a index
 * @n: number
 * @index: index strating from 0
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
