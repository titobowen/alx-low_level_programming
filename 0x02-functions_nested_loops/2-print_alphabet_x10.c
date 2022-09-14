#include "main.h"
/**
 * main - Entry point
 * Description: pint 10x alphabet
 * Return: Always 0 (success)
 */
void print _alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	return (0);
}
