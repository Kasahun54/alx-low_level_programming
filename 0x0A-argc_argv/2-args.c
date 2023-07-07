#include <stdio.h>
/**
 * main - print all arguments
 * @argc: number of command
 * @argv: array contain the program comand
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
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
