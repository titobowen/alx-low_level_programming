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
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
		else if (a[i] == '\0')
		{
			printf("\n");
		}
	printf("\n");
}
