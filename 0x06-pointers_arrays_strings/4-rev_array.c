#include "main.h"
/**
 * reverse_array - prints array in reverse
 * @n: number of array elements
 * @a: array
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
	int i, b, c;

	i = 0;
	c = n - 1;
	while (i < c)
	{
		c--;
		b = a[i];
		a[i] = a[c];
		i++;
	}
}
