#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - check for numbers below 98
 * @n: int type
 * Return: return all values including 98
 */
void print_to_98(int n)
{
int i;
if (n == 98)
{
printf("%d, ", n);
}
else if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d,", i);
}
}
printf("98\n");
}
