#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Aladin Bensassi
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
{
printf("Last digit of %i is %i and is greater than 5", n, x);
}
else if (x == 0)
{
printf("Last digit of %i is 0 and is 0", n);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0", n, x);
}
return (0);
}
