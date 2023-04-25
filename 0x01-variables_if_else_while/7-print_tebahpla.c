#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all single digit numbers of base 10 using putchar
* Return: 0 Always (Success)
*/
int main(void)
{
	char alphbrev;

	for (alphbrev = 'z'; alphbrev >= 'a'; alphbrev--)
	putchar(alphbrev);
	putchar('\n');

	return (0);
}
