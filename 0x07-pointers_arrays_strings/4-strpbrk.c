#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to locate
 * Return: a pointer to matched byte
 * if set is matched, else null
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
return ('\0');
}
