#include "holberton.h"

/**
 * flip_bits -function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: unsigned long int type
 * @m: unsigned long int type
 * Return: always success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, i;
j = 0;
for (i = 0; i < 64; i++)
{
if (((n >> i) & 1) != ((m >> i) & 1))
{
j++;
}
}
return (j);
}
