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
	int a = 0;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < size && size > 0)
		{
			while (b > 0)
			{
				b = size - 1 - a;
				_putchar(' ');
				b--;
			}
			while (c <= a)
			{
				c = 0;
				_putchar('#');
				c++;
			}
			_putchar('\n');
			a++;
		}
	}
}
