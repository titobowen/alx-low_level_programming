#include "main.h"
#include <string.h>
/**
 * _strncat - join string
 * @src: first
 * @dest: second
 * @n: number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = src[a];
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
