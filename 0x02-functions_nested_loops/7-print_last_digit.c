  
#include "holberton.h"
/**
 * Boumaiza-kais
 * Description : prints the last digit of a number.
 * Return : last digit of a number (i)
 */

int print_last_digit(int i)
{
int r;
if (i >= 0)
r = i % 10;
else
r = (i % 10) * -1;
_putchar(r + '0');
return (r);
}
