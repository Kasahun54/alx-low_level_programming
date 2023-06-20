#include "main.h"

/**
 * _islower - show 1 if the alphabet is lower and show 0 if any other
 *
 * @c: ASCI code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
