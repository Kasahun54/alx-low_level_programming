#include <stdio.h>
/**
 * main - print alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s = 'a';
	char c = 'A';
	int n = 0;

	while (n < 52)
	{
		if (n < 26)
		{
		putchar(s);
		s++;
		}
		else
		{
		putchar(c);
		c++;
		}
	n++;
	}

	putchar('\n');
	return (0);
}
