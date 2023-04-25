#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all the numbers of base 16 in lowercase
* Return: 0 Always (Success)
*/

int main(void)
{
	int c;
	char naba;

	for (c = '0'; c <= '9'; c++)
	putchar(c);

	for (naba = 'a'; naba <= 'f'; naba++)
	putchar(naba);
	putchar('\n');

	return (0);
}
