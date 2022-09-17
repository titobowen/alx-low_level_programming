#include "main.h"
/**
 * more_numbers - prints numbers and line
 * Description: prints numbers
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int a;
	int b = 1;
	int c;

       while (b <= 10)
	{
		for (a = 0; a <= 14; a++)
		{
			a = c;
			if (a > 9)
			{
				_putchar('1');
				c = a % 10;
				_putchar(c + '0');
			}
		}
		_putchar('\n');
		b++;
	}
}

