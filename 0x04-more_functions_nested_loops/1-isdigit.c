#include "holberton.h"
/**
 * _isdigit - checks if character is digit, return 1 is yes and 0 if not.
 * @c: is char type
 * Return: 1 if c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
