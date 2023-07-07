#include <stdio.h>
/**
 * main - display the argc number
 * @argc: number
 * @argv: array contain string
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
