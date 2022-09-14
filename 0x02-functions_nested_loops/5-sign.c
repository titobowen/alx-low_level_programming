#include "main.h"
/**
 * int print_sign(int n)- function prints and checks values
 * Descroption: prints values
 * Return: Always 0 (sucess)
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
