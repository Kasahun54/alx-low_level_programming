#include "main.h"
/**
 * _strncat - concatinate string
 * @dest - destination
 * @src - source
 * @n - max number of charachter
 * Return : Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c1 = 0, c2 = n ;

	while(*(dest + c1) != '\0')
	{
		c1++;
	}

	while(c2 >= 0)
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c1++;
		c2++;
	}
	return (dest);
}
