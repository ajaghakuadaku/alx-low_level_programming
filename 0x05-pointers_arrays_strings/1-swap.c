#include "main.h"

/**
 * swap_int - swaps value of a and b
 * @a: first value
 * @b: second value
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

	int swapp = *a;

	*a = *b;
	*b = swapp;
}
