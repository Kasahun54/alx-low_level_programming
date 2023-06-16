#include <stdio.h>
/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int n = 0 ;

	while (n < 26)
	{
		if(a != 'q' || a != 'e')
		{
			putchar(a);
		}
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
