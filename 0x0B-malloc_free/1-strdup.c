#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *strout;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strout[j] = str[j];
	return (strout);
}
