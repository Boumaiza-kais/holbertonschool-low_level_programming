#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: an array of size argc
 *
 * Return: always 0
 */

int main(int argc  __attribute__((unused)), char const *argv[])
{
printf("%s\n", argv[0]);
return (0);
}