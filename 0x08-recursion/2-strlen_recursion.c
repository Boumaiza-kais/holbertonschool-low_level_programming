#include "holberton.h"
/**
 * _strlen_recursion - finding the length of a string.
 * @s: string type
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
return (i + _strlen_recursion(s + 1));
}
else
ret
