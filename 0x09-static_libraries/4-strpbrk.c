#include "main.h"
/**
 * *_strpbrk - scan string for occurrence
 * @s: string variable
 * @accept: string comparence
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *p;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				p = &s[a];
				return (p);
			}
		}
	}
	return ('\0');
}
