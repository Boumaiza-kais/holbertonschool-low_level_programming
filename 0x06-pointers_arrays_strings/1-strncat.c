#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - function that concatenates two strings
 * @dest : char type
 * @src : char type
 * @n : int type
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}
