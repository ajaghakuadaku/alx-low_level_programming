#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that prints all possible combinations of single-digit 

numbers
* Return: 0 (Success)
*/

int main(void)
{
	int e:

	for (e = '0'; e <= '9'; e++)
	{
	putchar(e);
	if (e != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

