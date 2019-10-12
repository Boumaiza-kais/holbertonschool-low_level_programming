#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers.
 * @argc: number of command line arguments
 * @argv: an array of size argc
 *
 * Return: return 0 ; if there is error return 1
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
puts("Error");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
