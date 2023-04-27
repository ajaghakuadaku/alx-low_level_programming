#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: number in focus
 * Return: value of last digit
 */

int print_last_digit(int a)

{

	int lst_digit;

	lst_digit = a % 10;
	if (a < 0)
	{
	lst_digit = lst_digit * -1;
	}
	_putchar(lst_digit + '0');
	return (lst_digit);
}
