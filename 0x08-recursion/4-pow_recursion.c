#include "main.h"
/**
 * _pow_recursion - solves x raised to y
 * @x: number variable
 * @y: power variable
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
