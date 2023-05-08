#include "main.h"

/**
 * *_memcpy - copies n bytes from src to dest
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
