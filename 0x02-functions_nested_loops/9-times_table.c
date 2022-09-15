#include "main.h"
/**
 * times_table - prinyts nine times table
 * Description: prints times table
 * Return: Always 0(success)
 */
void times_table(void)
{
	int row;
	int column;
	int result;

	while (row = 0;)
	{
		row <= 9;
		row++;
		while (column = 0;)
		{
			column <= 9;
			result = row * column;
			_putchar(result);
			if (row <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
