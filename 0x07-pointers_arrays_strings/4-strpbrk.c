#include "holberton.h"
#include <stdio.h>
/**
* _strpbrk - fills memory with a constant byte.
* @s: char type
* @accept: char type
* Return: 0.
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (&(s[i]));
}
}
return (0);
}
