#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: is int type
 * @b: is int type
 * Return: sum of two numbers
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sub two numbers
 * @a: is int type
 * @b: is int type
 * Return: subtraction of two number
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - mul two numbers
 * @a: is int type
 * @b: is int type
 * Return: multiplication of two numbers
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - div of two numbers
 * @a: is int type
 * @b: is int type
 * Return: divide of two numbers
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - mod of two numbers
 * @a: is int type
 * @b: is int type
 * Return: modulus of two numbers
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
