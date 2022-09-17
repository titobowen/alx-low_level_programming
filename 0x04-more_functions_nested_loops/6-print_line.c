#include "main.h"
/**
 * print_line - draws straight line
 * @n: variable
 * Description: prints a straight line
 * Return: returns true print line
 */
void print_line(int n)
{
	while (n > 0)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
		else
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}


