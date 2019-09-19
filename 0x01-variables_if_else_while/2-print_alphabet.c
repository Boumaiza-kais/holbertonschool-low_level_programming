#include <stdio.h>
/**
 * main - main block
 * Description: lowercase using putchar
 * Return: 0
 */
int main(void)
{
char lowcase= 'a';
while (lowcase <= 'z')
{
putchar(lowcase);
lowcase++;
}
putchar('\n');
return (0);
}
