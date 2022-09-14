#include "main.h"
/**
 * main - Entry point
 * Description: prints alphabet in new line
 * Return: Alway 0 (success)
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c >= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
