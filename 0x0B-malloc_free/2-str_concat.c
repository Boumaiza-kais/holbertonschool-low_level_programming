#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - create a function that concatenates two strings
* @s1: size of the array.
* @s2: size of the array.
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
int l = 0;
int l2 = 0;
int i = 0;
char *p;
if (s1 != NULL)
{
while (s1[l] != '\0')
l++;
}
if (s2 != NULL)
{
while (s2[l2] != '\0')
l2++;
}
p = malloc(sizeof(char) * (l + l2 + 1));
if (p == NULL)
return (NULL);
for (i = 0; i < l; i++)
p[i] = s1[i];
for (i = 0; i < l2; i++)
p[i + l] = s2[i];
p[l + l2] = '\0';
return (p);
}
