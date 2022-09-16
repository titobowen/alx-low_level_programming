#include "main.h"
/**
 * _isupper - prints an uppercase letter
 * @c: uppercase variable
 * Description: prints uppercasde letter
 * Return: 1 if uppercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
