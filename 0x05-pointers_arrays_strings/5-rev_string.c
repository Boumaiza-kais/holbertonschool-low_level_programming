#include "holberton.h"
/**
 * rev_string - function that reverses a string.
 * followed by a new line.
 * @s : char  type
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i;
int k;
int l;
int j; 
l = 0;
while (*(s + l) != 0)
{
l++;
}
j=l-1;
for (i = 0; i < l / 2 ; i++)
{
k = s[j];
s[j] = s[i];
s[i] = k;
j--;
}
}