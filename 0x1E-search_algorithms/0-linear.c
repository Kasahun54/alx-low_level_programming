#include "search_algos.h"

/**
  * linear_search - Search the value in an array
  * @array: A pointer to index
  * @size: The number of elements
  * @value: search value
  *
  * Return: If the value is empty -1. else display index
  *
  * Description: Prints a value every time.
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

