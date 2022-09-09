#include <stdio.h>
/*print letters except q and e*/
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
