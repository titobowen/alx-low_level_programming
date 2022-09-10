#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

