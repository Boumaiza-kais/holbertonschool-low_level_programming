#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function to return index of compared int
 * @array: int type
 * @size: int type
 * @cmp: pointer to function of int type
 * Return: returns the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL)
return (-1);
if (size <= 0)
return (-1);
if (cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
