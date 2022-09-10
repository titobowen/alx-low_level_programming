#include <stdio.h>
/**
 * main - Entry point
 * Description: prints three different characters
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		if (a != b && a!= c)
			putchar(a);
	}
	for (b = 0; b <= 9; b++)
	{
		if (b != a && b!= c)
			putchar(b);
	}
	for (c = 0; c <= 9; c++)
	{
		if (c != a && c != b)
			putchar(c);
	}
	putchar(',');
	putchar(' ');
	return (0);
}
