#include "main.h"
/**
 * leet - correspond letter with number
 * @s: string variable
 * Return: str
 */
char *leet(char *s)
{
	int i, ii;
	char a1[] = "aeotl";
	char A1[] = "AEOTL";
	char t[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii <= 4; ii++)
		{
			if (s[i] == a1[ii] || A1[ii])
			{
				s[i] = t[ii];
			}
		}
	}
	return (s);
}
