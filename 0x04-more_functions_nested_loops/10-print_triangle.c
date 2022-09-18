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
	int a = 1;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a <= size)
		{
			while (b > 0)
			{
				b = size - a;
				_putchar(' ');
				b--;
			}
			while (c < a)
			{
				c = 0;
				_putchar('#');
				c++;
			}
			if (a == size)
			{
				continue;
			}
			_putchar('\n');
			a++;
		}
	}
}
