#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints triangle
 * @size: size variable
 * Description: prints triangle
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int a = 0, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < size && size > 0)
		{
			b = size - 1;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}
			c = 0;
			while (c <= a)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
