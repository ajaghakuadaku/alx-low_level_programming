#include "main.h"

/**
 * main - check if number is positive, negative or zero
 * 0: number to be checked
 * Return: 0 (Success)
 */
void positive_or_negative(int i)

{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;

}
