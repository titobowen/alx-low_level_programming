#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * DEscription: prints numbers
 * return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("Last digit of %d is %d and is 0\n", n, m);
	return (0);
}
