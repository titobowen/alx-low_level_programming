#include "main.h"
/**
 * @n: carrier variable
 * int print_sign(int n)- function prints and checks values
 * Descroption: prints values
 * Return: 1 if n > 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
