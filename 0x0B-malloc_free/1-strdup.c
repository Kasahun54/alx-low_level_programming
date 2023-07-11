#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	d = malloc(sizeof(char) * c + 1);

	if (d == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		d[i] = str[i];

	return (d);

}
