#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function to iterate through arrays
 * @array: int type
 * @size: type of size_t typedef
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action == NULL)
return;
if (size <= 0)
return;
if (array == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
