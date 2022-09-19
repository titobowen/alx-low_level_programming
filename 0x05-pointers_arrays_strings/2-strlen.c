#include "main.h"
/**
 * _strlen - string length
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
