#include <stdio.h>
/**
 * main - main block
 * Description: alphabet lowcase and uppercase using putchar
 * Return: 0
 */
int main(void)
{
char case = 'a';
while (case <= 'z')
{
putchar(case);
case++;
}
case = 'A';
while (case <= 'Z')
{
putchar(case);
case++;
}
putchar('\n');
return (0);
