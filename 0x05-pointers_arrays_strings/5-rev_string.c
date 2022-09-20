#include "main.h"
/**
 * rev_string - string in reverse
 * @s: string to be printed
 * Return: void
 */
void rev_string(char *s)
{
	int len, i, j;
	char v1, v2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	i = len - 1;
	j = 0;
	while (i > j)
	{
		v1 = s[i];
		v2 = s[j];
		s[j] = v1;
		s[i] = v2;
		i--;
		j++;
	}
}


