#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all single digit numbers of base 10
 * Return: 0 Always (Success)
 */

int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	putchar(b);
	putchar('\n');

	return (0);
}

