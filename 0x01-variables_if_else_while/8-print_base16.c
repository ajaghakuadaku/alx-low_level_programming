#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that prints all single digit numbers of base 10 starting from 0 using putchar
* Return: 0 Always (Success)
*/

int main(void)
{
	int c;
	char alphnumb;

	for (c = '0'; c <= '9'; c++)
	putchar(c);

	for (alphnumb = 'a'; alphnumb <= 'f'; alphnumb++)
	putchar(alphnumb);
	alphnumb('\n');

	return (0);
}
