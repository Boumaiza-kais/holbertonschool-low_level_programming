#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* *string_nconcat - create a function that concatenates two strings
* @s1: size of the array.
* @s2: size of the array.
* @n: int type for size of byte
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j;
int sign = n;
char *p;
int l1, l2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (l1 = 0; s1[l1] != '\0'; l1++)
;
for (l2 = 0; s2[l2] != '\0'; l2++)
;
if (sign >= l2)
{
sign = l2;
p = malloc(sizeof(char) * (l1 + l2 + 1));
}
else
p = malloc(sizeof(char) * (l1 + n + 1));
if (p == NULL)
return (NULL);
for (i = 0; i < l1; i++)
{
p[i] = s1[i];
}
for (j = 0; j < sign; j++)
{
p[i++] = s2[j];
}
p[i++] = '\0';
return (p);
}
