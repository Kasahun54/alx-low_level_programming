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

	for (i = 0; i < n/2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1]
		a[n - i - 1] = temp;
		
	}
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
