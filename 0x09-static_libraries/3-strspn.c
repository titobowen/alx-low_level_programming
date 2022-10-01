#include "main.h"
/**
 * _strspn - return number of occurence in a string
 * @s: string variable
 * @accept: match up
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, end = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				end++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (end);
}
