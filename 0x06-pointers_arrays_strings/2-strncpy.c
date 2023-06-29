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
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	
	return dest;
}
}
