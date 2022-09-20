#include "main.h"
#include "stdio.h"
/**
 * print_array - prints array values
 * @a: array variable
 * @n: number input variable
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(a[i]);
		if (i < 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
