#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - ffunction that prints a string, in reverse
 * followed by a new line.
 * @s : char  type
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != 0 ; i++)
{
}
i--;
while (s[i] != 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
