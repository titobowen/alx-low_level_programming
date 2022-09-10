#include <stdio.h>
/**
 * main - print if the value is positive, negative or zero
 *
 * Description: using the main function
 * program points postive, negative or zero 
 * REturn: 0
 */
int main(void)
{
	char a;
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
