#include "main.h"
/**
 * _isalpha - function that checks for alpha character
 * @c: carrier variable
 * Description: checks alpha character
 * Return: Always 0 (success)
 */
int isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
