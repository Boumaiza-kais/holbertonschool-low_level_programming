#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: number of command line arguments
 * @argv: array of pointers to arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
int (*op)(int, int);
int num1, num2;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
op = get_op_func(argv[2]);
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (op == NULL)
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", op(num1, num2));
return (0);
}
