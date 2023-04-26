#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{

	char alph;
	int a;
a = 0;

	while (a < 10)
	{
	for (alph = 'a'; alph <= 'z'; alph++)
	{
	_putchar(alph);
	}
	_putchar('\n');
	a++;
	}
}

