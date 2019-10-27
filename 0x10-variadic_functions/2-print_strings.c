#include "variadic_functions.h"
#include "stdio.h"
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @n: unsigned int type
 * @separator : char type
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
char *test;
va_start(arg, n);
for (i = 0; i < n; i++)
{
test = va_arg(arg, char*);
if (test)
{
printf("%s", test);
}
else
printf("(nil)");
if (separator != NULL && (i < (n - 1)))
printf("%s", separator);
}
va_end(arg);
printf("\n");
}