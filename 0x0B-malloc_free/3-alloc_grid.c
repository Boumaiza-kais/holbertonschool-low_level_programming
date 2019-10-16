#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int x, y;
int **p;
if (width <= 0 || height <= 0)
{
return  (NULL);
}
p = malloc(height * sizeof(int *));
if (p == NULL)
{
return (NULL);
}
for (x = 0; x < height; x++)
{
p[x] = malloc(width * sizeof(int));
if (p[x] == NULL)
{
for (y = 0; y < x;  y++)
free(p[y]);
free(p);
return (NULL);
}
for (y = 0; y < width; y++)
{
p[x][y] = 0;
}
}
return (p);
}
