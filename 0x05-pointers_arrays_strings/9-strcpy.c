#include "holberton.h"
/**
 * char *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest,
 * followed by a new line.
 * @dest : char  type
 * @src : char type
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i ; j++)
{
dest[j] = src[j];
}
return (dest);
}
