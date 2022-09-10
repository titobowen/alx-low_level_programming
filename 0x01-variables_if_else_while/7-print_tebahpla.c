#include <stdio.h>
/** 
 * main - Entry poin                                                                            
 * Description: print lowercase alphabet in reverse
 * Return:b Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
