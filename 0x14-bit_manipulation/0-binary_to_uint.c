#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - function that  convert binary to unsigned int
 * @b: pointer to const char
 * Return: always successful
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;
unsigned int j = 1;
int k = 0;
if (b == NULL)
return (0);
while (b[k] != '\0')
{
if (b[k] != '0' && b[k] != '1')
{
return (0);
}
i <<= 1;
if (b[k] == '1')
{
i ^= j;
}
}
return (i);
}
