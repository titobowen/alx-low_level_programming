#include <stdio.h>
/**                                                                                                                              
 * main - Entry point                                                                                                            
 * Description: print base 10 digit                                                                      
 * Return:b Always 0 (success)                                                                                                   
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
