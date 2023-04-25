#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints lowercase except q and e
 * Return: Always (Successs)
 */
int main(void)

{
	char lowalphb, n, m;
	
m = 'e';
n = 'q';

	for (lowalphb = 'a'; lowalphb <= 'z'; lowalphb++)
	{
		if (lowalphb != m && lowalphb != n)
		putchar(lowalphb);
	}
	putchar('\n');
	return (0);
}
