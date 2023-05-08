#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @c: character to locate
 * @s: string to search
 * Return: a pointer to the first occurrence
 * if c is found else null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
