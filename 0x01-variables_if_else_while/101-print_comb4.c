#include <stdio.h>
/**
 * main - Entry point
 * Description: prints three different characters
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (c != a && c != b && a != b &&n a != c)
					putchar(a);
					putchar(b);
					putchar(c);
			}
		}
	}
	putchar(',');
	putchar(' ');
	return (0);
}
