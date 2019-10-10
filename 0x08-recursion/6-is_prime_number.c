#include "holberton.h"
/**
 * check_prime - check for number is prime
 * @a: int type
 * @b: int type
 * Return: check prime
 */
int check_prime(int a, int b)
{
if (a == b)
return (1);
else if  (b % a == 0)
return (0);
else
check_prime(a + 1, b);
return (1);
}

/**
 * is_prime_number - return prime number or not
 * @n: int type
 * Return: 0
 *
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 0)
return (0);
check_prime(2,  n);
return (1);
}
