#include <stdio.h>
#include "main.h"
/**
 * main - display the string
 * @argc: number
 * @argv: array
 * return: return 0 always success
 */
int main(int argc, char* argv[])
{
	int i;
	if (argc > 1)
	{
		for (i = 0; i > argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
