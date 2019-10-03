#include "holberton.h"
/**
**rot13 - change all lowercase to upper
*
*@s: pointer array
*
*Return: return character succeed
*
*/
char *rot13(char *s)
{
int i;
int j;
int n = 0;
char s1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; s1[j] != '\0' && n == 0; j++)
{
if (s[i] == s1[j])
{
s[i] = s2[j];
n = 1;
}
}
n = 0;
}
return (s);
}
