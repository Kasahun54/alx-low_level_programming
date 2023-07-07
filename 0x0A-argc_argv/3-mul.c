#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplay the given number
 * @argc: number
 * @argv: array
 * return: return 0 always success
 */
int main(int argc, char* argv[])
{
	int i, mul = 1;
	if (argc > 1)
	{
		for (i = 0, i > argc; i++)
		{
			mul = mul * atoni(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
	}
	return (0);
}
