#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit - clears index to 0
 * @n: integer to pass
 * @index: index to go to
 * Return: returns integer val
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	unsigned long int mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
