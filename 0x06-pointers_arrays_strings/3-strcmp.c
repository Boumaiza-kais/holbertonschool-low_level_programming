#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings.
 * @s1 : char type
 * @s2 : char type
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int i;
int j = 0;
int n = 0;
for (i = 0 ; s1[i] != '\0' ; i++)
;
while (j < i && n == 0)
{
n = s1[j] - s2[j];
j++;
}
return (n);
}
