#include "main.h"
/**
 * reverse_array - revers integer
 * @a: integer array 
 * @n: size of a
 * return: the reversed integer
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; n <=0 ; n--)
	{
		*(a + i) = *(a + n);
		i++;
	}
	return (0);
}
