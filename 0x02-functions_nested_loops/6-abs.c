#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: the number to be computed
 * Return: Absolute value or 0
 */

int _abs(int a)
{

	if (a < 0)
	{
	int absval;

	absval = a * -1;
	return (absval);
	}
	return (a);
}
