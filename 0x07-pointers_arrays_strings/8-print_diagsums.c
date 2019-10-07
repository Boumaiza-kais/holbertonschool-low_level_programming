#include "holberton.h"
#include "stdio.h"
/**
 * print_diagsums- sum diagonal values
 * @a: int type
 * @size: int type
 * Return: sum of two sides
 *
 */
void print_diagsums(int *a, int size)
{
int x, y, suma, sumb;
x = 0;
y = 0;
sum1 = 0;
sum2 = 0;
for (x = 0;  x < size; x++)
sum1 += a[(size + 1) * x];
for (y =  0; y < size; y++)
sum2 += a[(size - 1) * (y + 1)];
printf("%d, %d\n",  sum1, sum2);
}
