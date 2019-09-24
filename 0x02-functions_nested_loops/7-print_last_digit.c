#include "holberton.h"
/**
 * print_last_digit - selects the last digit of an integer
 * @n: int type
 *
 * Return: the absolute value of last digit
 */
int print_last_digit(int i)
{
int r;
if (i >= 0)
r = i % 10;
else
r = (i % 10) * -1;
_putchar(r + '0');
return (r);
}
