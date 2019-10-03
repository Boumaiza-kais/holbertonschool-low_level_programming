#include "holberton.h"
/**
* *leet - encodes a string into 1337
* @s: string
*
* Return: pointer to a string
*/

char *leet(char *s)
{
int i;
i = 0;
int j;
char l[] = "oOlLeEaAtT";
char n[] = "0011334477";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (s[i] == l[j])
s[i] = n[j];
}
}
return (s);
}
