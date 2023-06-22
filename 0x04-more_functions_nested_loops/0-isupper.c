#include "main.h"

/**
 * _isupper - checks if letter is an uppercase.
 * @c: input character.
 * Return: 1 if is an uppercase character, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
