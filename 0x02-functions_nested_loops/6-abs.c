#include "holberton.h"
/**
 * _abs - compute the absolute value of an integer
 * @r: int type
 * Return: return absolute value of integer
 */
int _abs(int r)
{
if (r < 0)
return (r * -1);
else
return (r);
}
