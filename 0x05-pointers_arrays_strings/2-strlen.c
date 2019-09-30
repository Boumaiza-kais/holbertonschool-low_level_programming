#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s : char type
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
for (i = 0 ; s[i] != 0 ; i++)
{}
return (i);
}
