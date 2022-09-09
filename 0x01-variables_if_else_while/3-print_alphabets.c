#include <stdio.h>
/*print letters in uppercase and lowercase*/
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

