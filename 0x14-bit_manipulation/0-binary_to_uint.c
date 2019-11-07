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
unsigned int k = 0;
if (b == NULL)
return (0);
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
for (i = 0 ; b[i] != '\0' ; i++)
{
k <<= 1;
if (b[i] == '1')
{
k ^= j;
}
}
return (k);
}
