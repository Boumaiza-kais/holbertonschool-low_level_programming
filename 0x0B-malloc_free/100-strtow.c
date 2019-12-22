#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* strtow -function that splits a string into words
* @str: string (char *)
*Return: *pointer
*/
char **strtow(char *str)
{
char **p = NULL;
int l;
l = 0; 
while (*str)
if (*str++ != ' ')
l++;
p = malloc(sizeof(char *));
*p = malloc((l * sizeof(char)) + l);
return (p);
}
