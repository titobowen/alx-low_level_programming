#include "main.h"
/**
 * is_prime_number - returns 1 if prime number
 * @n: number variable
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - vhecks prime numner
 * @n: number variable
 * @ref: referencde number
 * Return: int
 */
int check_prime(int n, int ref)
{
	if (n % ref == 0 || n <= 1)
	{
		return (0);
	}
	else if (n >= ref)
	{
		return (1);
	}
	return (0);
}
