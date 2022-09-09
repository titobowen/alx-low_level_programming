#include <stdio.h>
/*print letters except q and e*/
int main(void)
{
	/*while loop to implement code*/
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		if (a = 'e' || a = 'q')
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
