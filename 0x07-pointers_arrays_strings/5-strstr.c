#include"holberton.h"
/**
 * _strstr - searches a string for a a substring
 * @needle: char type
 * @haystack: char type
 * Return: pointer 
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
return (haystack);
}
}
return (haystack);
}
