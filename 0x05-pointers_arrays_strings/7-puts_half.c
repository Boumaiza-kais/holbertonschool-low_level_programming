#include "holberton.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str : char  type
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i;
int l;
int n;
l = 0;
while ((*(str + l) != '\0'))
{
l++;
}
n = (l - 1) / 2;
if (n / 2 == 0)
{
n = (l - 1) / 2;
for (i = n + 1; i <= l - 1 ; i++)
{
_putchar(str[i]);
}
}
else
for (i = n + 1; i <= l - 1 ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
