include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - Entry point
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}