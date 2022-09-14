#include "main.h"
/**
 * int _abs - prints the absolute integer
 * @n: an integer
 * Description: prints an absolute integer
 * Return: Always 0 (success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
