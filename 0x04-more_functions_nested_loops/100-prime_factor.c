#include <stdio.h>

/**
* main - inds and prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*/
int main(void)
{
long int num = 612852475143,
div = 2;
while (div < num)
{
if (num % div != 0)
{
div++;
}
else if (num % div == 0)
{
num = num / div;
div = 2;
}
}
printf("%ld\n", num);
return (0);
}
