#include "main.h"

/**
 * get_endianness - check the endianness of a machine
 *
 * Return: 0 if big endian, 1 if little endian
 *
 */
int get_endianness(void)
{
	int x = 1;

	return (*((char *) &x) + '0');
}
