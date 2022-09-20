#include "main.h"
/**
 * *_strcpy - copies string
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (l = 0; l <= i; l++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
