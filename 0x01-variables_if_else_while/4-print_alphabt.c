#include <stdio.h>
/**                                                                                                                              
 * main - Entry point                                                                                                            
 * Description: print lowercase alphabet                                                                                            
 * Return:b Always 0 (success)                                                                                                   
 */
int main(void)
{
	/*while loop to implement code*/
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
