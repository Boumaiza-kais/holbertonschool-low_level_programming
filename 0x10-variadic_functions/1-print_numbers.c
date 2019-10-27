#include "variadic_functions.h"
#include "stdio.h"
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new lin
 * @n: unsigned int type
 * @separator : char type
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
va_start(arg, n);
for (i = 0; i < n; i++)
{
printf("%d",  va_arg(arg, int));
if (separator != NULL && (i < (n - 1)))
printf("%s", separator);
}
va_end(arg);
printf("\n");
}
