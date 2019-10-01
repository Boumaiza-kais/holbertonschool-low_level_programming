#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * the value it points to to 98.
 * @a : int type
 * @b : int type
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}