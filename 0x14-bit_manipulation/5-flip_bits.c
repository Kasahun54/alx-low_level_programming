#include "main.h"

/**
 * flip_bits - flip a bits
 * @n: the first number
 * @m: the second number
 *
 * Return: unsigned int value of number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f, c = 0;

	f = n ^ m;

	while (f > 0)
	{
		c += f & 1;
		f >>= 1;
	}
	return (c);
}
