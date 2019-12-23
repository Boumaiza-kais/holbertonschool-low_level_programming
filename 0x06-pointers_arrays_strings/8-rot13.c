#include "holberton.h"
/**
 * *rot13 - encodes a string using rot13.
 * @s : is char type.
 * Return: Always 0.
 */
char *rot13(char *s)
{
int i;
int j;
char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0;  s[i] != '\0'; i++)
{
for (j = 0;  j < 52; j++)
{
if (s[i] == x[j])
{
s[i] = y[j];
break;
}
}
}
return (s);
}
