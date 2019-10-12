#include <stdio.h>
/**
 * main - function that prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: an array of size argc
 *
 * Return: return 0
 */

int main(int argc, char const *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
