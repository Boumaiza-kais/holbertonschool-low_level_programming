#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - creates an array of chars, and initializes it
* with a specific char.
* @size: unsigned int
* @c: char
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *p;
if (size == 0)
return (NULL);
p = (char *) malloc(size * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
p[i] = c;
return (p);
}
