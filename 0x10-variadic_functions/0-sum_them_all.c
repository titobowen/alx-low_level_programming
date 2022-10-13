#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all variables
 * @n: number of variables
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;
va_list ap;

va_start(ap, n);
for (i = 0; i < n; i++)
{
if (n == 0)
{
return (0);
}
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
