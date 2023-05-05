#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer first string
 * @s2: pointer second string
 * Return: str1 < str2 negative difference str1 == str2 0
 * str1 > str2 positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
