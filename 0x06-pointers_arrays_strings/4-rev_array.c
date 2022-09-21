#include "main.h"
/**
 * reverse_array - prints array in reverse
 * @n: number of array elements
 * @a: array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		a[i] = a[n];
		b = a[i];
		n--;
		i++;
	}
}
