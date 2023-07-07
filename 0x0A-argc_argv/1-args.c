#include <stdio.h>
#include "main.h"
/**
 * main - display the argc number
 * @argc: number
 * @argv: array contain string
 * return: return 0 always success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
