#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: an array of size argc
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int counter;
for (counter = 0; counter < argc; counter++)
printf("%s\n", argv[counter]);
return (0);
}
