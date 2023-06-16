#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
char ch = 'a';
int i = 0;
	while (i < 16)
	{
		if (i < 10)
		{
		putchar(i + '0');
		}
		else
		{
		putchar(ch);
		ch++;
		}
	i++;
	}
	putchar('\n');
return (0);
}
