#include "main.h"

/**
 * _isalpha - show 1 if the it is alphabet and show 0 if any other
 *
 * @c: ASCI code
 *
 * Return: 1 for lower and upper case character. 0 for the rest.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
