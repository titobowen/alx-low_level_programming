#include "main.h"
/**
 * more_numbers - prints numbers and line
 * Description: prints numbers
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}

