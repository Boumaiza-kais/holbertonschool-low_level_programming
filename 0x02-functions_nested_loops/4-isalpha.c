#include "holberton.h"
/**
 * Boumaiza-kais
 * Description : isalpha
 * Return: 1 if c is letter, lowercase or uppercase
 * Return 0 if it s not
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
