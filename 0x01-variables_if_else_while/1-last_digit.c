#include <stdio>
#include <time.h>
/**
 * main - print last digit of the variable n.
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
