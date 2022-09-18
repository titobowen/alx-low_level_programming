#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size variable
 * Description: prints triangle
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int a = 1, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a <= size && size > 0)
		{
			b = 0;
			while (b < size)
			{
				_putchar(' ');
				b++;
			}
				b = 0;
				while (b < a)
				{
					_putchar('#');
					b++;
				}
			_putchar('\n');
			a++;
		}
	}
}
