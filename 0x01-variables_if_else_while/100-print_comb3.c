#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	    {
		putchar(i + '0');
		putchar(j + '0');
		if (((i * 10) + j) < 89)
		{
		putchar(',');
		putchar(' ');
		}
	    }
	}
putchar('\n');
return (0);
}
