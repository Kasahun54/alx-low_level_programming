#include "main.h"
/**
 * reverse_array - revers integer
 * @a: integer array 
 * @n: size of a
 * return: the reversed integer
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; n > 0; n--)
	{
		temp = *(a + n);
		*(a + n) = *(a + (n - 1));
		*(a + (n - 1)) = temp;
	}
}
