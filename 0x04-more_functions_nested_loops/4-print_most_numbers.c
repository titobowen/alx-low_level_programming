#include "main.h"
/**
 * print_most_numbers - prints numbers
 * Description: prints numbers
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a);
		}
		a++;
	}
}
