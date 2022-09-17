#include "main.h"
/**
 * print_line - draws straight line
 * @n: variable
 * Description: prints a straight line
 * Return: returns true print line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}


