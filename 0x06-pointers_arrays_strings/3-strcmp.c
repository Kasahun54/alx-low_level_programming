#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: string one
 * @s2: string two
 * return: return the differnce with ASCII
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	for(i = 0; *s1 != '\0'; i++)
	{
		result = *(s1 + i) - *(s2 + i);
	if (result == 0)
		continue;
	else
		return result;
	}
	return result;
}
