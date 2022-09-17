#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: variable entry
 * Description: diagonal line
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i = 0;
	int a = 0;

	while (i < n && n > 0)
	{
		while (a < i)
		{
			_putchar(' ');
			a++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
