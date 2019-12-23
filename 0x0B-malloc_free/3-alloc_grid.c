#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: is int type.
 * @height: is int type.
 * Return: pointer ( 2 dimensional array created)
 */

int **alloc_grid(int width, int height)
{
int **mat;
int i;
int j;
int z;

if (width <= 0 || height <= 0)
return (NULL);
mat = malloc(height * sizeof(int *));
if (mat == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
mat[i] = malloc(width * sizeof(int));
if (mat[i] == NULL)
{
i--;
while (i >= 0)
{
free(mat[i]);
i--;
}
free(mat);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
z = 0;
while (z < width)
{
mat[j][z] = 0;
z++;
}
}
return (mat);
}
