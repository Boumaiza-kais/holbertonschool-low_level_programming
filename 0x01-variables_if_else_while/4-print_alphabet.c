#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet without e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
char case;
for (case = 'a'; case <= 'z'; case++)
if (case == 'e' || case == 'q')
case++
putchar(case);
putchar('\n');
return (0);
}
