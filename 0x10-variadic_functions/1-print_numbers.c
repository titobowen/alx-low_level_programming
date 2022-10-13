#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: number of vaiables
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
}
if (separator != NULL)
{
printf("%s", separator);
}
va_end(ap);
putchar('\n');
}
