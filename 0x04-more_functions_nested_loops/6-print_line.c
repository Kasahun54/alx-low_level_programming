#include "main.h"

/**
 * print_line - print straight line
 * @n: input how long
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
