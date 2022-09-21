#include "main.h"
/**
 * _strcat - joins two string
 * @src: first string variable
 * @dest: second string variable
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	_putchar('\n');
	return (dest);
}
