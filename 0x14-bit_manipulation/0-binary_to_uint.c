#include "main.h"
/**
 * binary_to_uint - binary convert to unsigned int
 * @b: string to convert to int
 * Return: converted unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			a = (a << 1) | 1;
		else if (*b == '0')
			a <<= 1;
		else
			return (0);
		b++;
	}
return (a);
}
