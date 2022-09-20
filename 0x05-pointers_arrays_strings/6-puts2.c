#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string to be checked
 * Return: void
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\0');
}
