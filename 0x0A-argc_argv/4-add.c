#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that adds positive numbers
 * @argc: number of command line arguments
 * @argv: an array of size argc
 *
 * Return: return 0 ; if there is error return 1
 */

int main(int argc, char const *argv[])
{
int i;
int j;
int sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < 48  || argv[i][j] > 57)
{
puts("Error");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
