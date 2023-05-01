#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 * @c: character toprint
 * Return: Success 1, on error -1 and errno set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
