#include "main.h"
/**
 * print_numbers - prints numbers
 * Description: prints numbers
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
