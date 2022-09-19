#include "main.h"
/**
 * swap_int - swaps integers
 * @a: variable a
 * @b: variable b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int var = *a;

	*a = *b;
	*b = var;
}
