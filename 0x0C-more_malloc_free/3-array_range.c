#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *array_range - creates an array of integers
  * @min: int type
  * @max: int type
  * Return: pointer
  */
int *array_range(int min, int max)
{
int *p;
int i, j;
if (min > max)
return (NULL);
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
return (NULL);
for (i = min, j = 0; i <= max; i++, j++)
p[j] = i;
return (p);
}
