#include "main.h"

/**
 * more_numbers - print number ten times 0 - 14
 * Return: no return.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
