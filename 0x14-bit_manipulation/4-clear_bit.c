#include "holberton.h"
/**
* clear_bit - function that sets the value of a bit to 0.
* @n: pointer to unsigned long int.
* @index: unsigned int typ
* Return: always succes
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
if (*n & m)
*n ^= m;
return (1);
}
