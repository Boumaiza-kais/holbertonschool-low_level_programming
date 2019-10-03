#include "holberton.h"
#include <stdio.h>
/**
 * char *_strcat - function that concatenates two strings
 * @dest : char type
 * @src : char type
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}
