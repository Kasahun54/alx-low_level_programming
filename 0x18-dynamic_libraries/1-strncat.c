#include "main.h"
/**
 * _strncat - concatinate two string,
 * @dest: destination.
 * @src: source.
 * @n: amount of byte.
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c1 = 0, c2 = 0;

	while (*(dest + c1) != '\0')
	{
		c1++;
	}

	while (c2 < n)
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c1++;
		c2++;
	}
	return (dest);
}
