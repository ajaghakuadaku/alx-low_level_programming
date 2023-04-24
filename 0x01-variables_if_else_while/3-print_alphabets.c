#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - program that prints the alphabet in lowercase
* Return: Always (Success)
*/
int main(void)
{
char low_upper;

	for (low_upper = 'a'; low_upper <= 'z'; low_upper++)
	putchar(low_upper);
	for (low_upper = 'A'; low_upper <= 'Z'; low_upper++)
	putchar(low_upper);
	putchar('\n');
	return (0);
}

