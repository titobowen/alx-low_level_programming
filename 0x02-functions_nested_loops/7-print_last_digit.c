#include "main.h"
/**
 * print_last_digit - prints last digits
 * @c: variable digit
 * Description: prints last digit
 * Return: integer
 */
int print_last_digit(int c)
{
	int l = c % 10;

	if (c < 0)
	{
		l *= -1;
	}
	_putchar(l + '0');
	return (l);
}
