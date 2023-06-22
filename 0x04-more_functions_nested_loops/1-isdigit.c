#include "main.h"

/**
 * _isdigit - cofirm numbers
 * @c: given letter
 * return 1 if it's a number or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
