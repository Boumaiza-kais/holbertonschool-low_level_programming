#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: an array of size argc
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int cents, n;
if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
for (n = 0 ; cents > 0 ; n++)
{
if (cents >= 25)
cents = cents - 25;
else if (cents >= 10)
cents = cents - 10;
else if (cents >= 5)
cents = cents - 5;
else if (cents >= 2)
cents = cents - 2;
else if (cents >= 1)
cents = cents - 1;
}
printf("%d\n", n);
return (0);
}
