#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string (char *)
 *
 * Return: pointer to new string
*/
char *_strdup(char *str)
{
int l = 0, i = 0;
char *p;
if (str == NULL)
return (NULL);
for (i = 0 ; str[i] != 0 ; i++)
l++;
l++; 
p = malloc(l *sizeof(char));
if (p == NULL)
return (p);
for (i = 0; i < l; i++)
p[i] = str[i];
return (p);
}
