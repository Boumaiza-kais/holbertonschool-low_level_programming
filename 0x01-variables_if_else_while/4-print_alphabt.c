#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet without e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
char case = 'a';
while (case <= 'z')
{
putchar(case);
case++;
if (case == 'e' || case == 'q')
case++;
}
putchar('\n');
return (0);
}
