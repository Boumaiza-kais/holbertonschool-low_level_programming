#include "holberton.h"

/**
* _strlen_recursion- calculate length of string
* @s: pointer to string to be counted
* Return: return count
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * pal - function that returns if string palindrome or not
 * @s: char type
 * @len: int type
 * Return: pal
 */

int pal(char *s, int len)
{
if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
{
return (pal(s + 1, len - 2));
}
else
return (0);
}

/**
 * is_palindrome - function that return if palindrome
 * @s: char type
 * Return: palindrome
 */

int is_palindrome(char *s)
{
int len;
len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (pal(s, len));
}