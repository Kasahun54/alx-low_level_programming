#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: string one
 * @s2: string two
 * return: return the differnce with ASCII
 */

int _strcmp(char *s1, char *s2)
{
	int i, result = 0;

	for(i = 0; result == 0; i++)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		result = *(s1 + i) - *(s2 + i);
	}
	return result;
}
