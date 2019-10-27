#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print a char
 * @c: char 
 *
 * Return: void
 */
void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}

/**
 * print_str - prints a string
 * @s: string 
 *
 * Return: void
 */

void print_string(va_list s)
{
char *str = va_arg(s, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * print_int - prints an int
 * @i: int 
 *
 * Return: void
 */
void print_int(va_list i)
{
printf("%d", va_arg(i, int));
}

/**
 * print_float - prints a float
 * @f: float 
 *
 * Return: void
 */
void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}
void print_all(const char * const format, ...)
{
int i, j;
va_list arg;
char *seperator;
prt_f type_array[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
va_start(arg, format);
i = 0;
seperator = "";
while (format && format[i])
{
j = 0;
while (type_array[j].c  != NULL)
{
if (format[i] == *(type_array[j].c))
{
printf("%s", seperator);
type_array[j].func(arg);
seperator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(arg);
}
