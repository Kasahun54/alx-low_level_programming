#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplay the given number
 * @argc: number of command
 * @argv: array that contain command
 * return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
