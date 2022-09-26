#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the constant
 * @b: the constant
 * @n: max amount of byte to be used
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n-- i++)
	{
		s[i] = b;
	}
	return (s);
}
