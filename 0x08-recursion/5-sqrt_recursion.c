#include "holberton.h"
#include <stdio.h>

/**
* checksqr - fills memory with a constant byte.
* @a: int type
* @b: int type
* Return: 0.
*/

int checksqr(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
else
return (checksqr(a, b + 1));
}

/**
* _sqrt_recursion - fills memory with a constant byte.
* @n: int type
* Return: 0.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (checksqr(n, 0));
}