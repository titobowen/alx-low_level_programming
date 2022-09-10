#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabet in lower-upper
 * Return: Always 0 (success)
 */
int main(void)
{
	/*printer function*/
	int s, b;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
		putchar('\n');
	return (0);
}

