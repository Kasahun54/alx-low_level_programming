#include "main.h"
/**
 * _strncpy - copy n strings
 * @dest: destination
 * @src: Source
 * @n: number of string to copy
 * return: return to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c1 = 0, c2 = 0;

	while (c2 < n && src[c2] != '\0')
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c1++;
		c2++;
	}
	return (dest);
}
