#include <stdio.h>
/**
 * main - Entry point 
 * Description: print lowercase alphabet
 * Return:b Always 0 (success) 
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

