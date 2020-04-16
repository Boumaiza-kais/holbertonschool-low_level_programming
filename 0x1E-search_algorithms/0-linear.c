#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - linear serach
 *@array: Pointer int type
 *@size: size of array
 *@value: int type
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);


	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);



}
