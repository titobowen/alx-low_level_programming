#include "main.h"
/**
 * reverse_array - array in reverse
 * @a: number of array elements
 * @n: array
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
	int i, b, c;

	for (i = 0, c = n - 1; i < c; i++, c--)
	{
		b = a[i];
		a[i] = a[c];
		a[c] = b;
	}
}
