#include "main.h"
/**
 * _sqrt_recursion - turns natural square root of number
 * @n: number variable
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(1, n));
}
/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */
int square(int val, int n)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(val + 1, n));
	}
	else
	{
		return (-1);
	}
}
