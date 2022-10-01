#include "main.h"
/**
 * *_memcpy - copies src to dest
 * @src: source
 * @n: amount of bytes
 * @dest: destination
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
