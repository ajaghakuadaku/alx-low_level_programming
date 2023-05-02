#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: he number of times the character \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
