#include "main.h"
/**
 * print_last_dig - prints last digits
 * @c: variable digit
 * Description: prints last digit
 * Return: integer
 */
int print_last_digit(int c)
{
	int l = c % 10;

	if (c < 0)
	{
		l = c * -1
	}
	_putchar(l);
	_putchar('\n');
}
