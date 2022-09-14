#include "main.h"
/**
 *_islower(int c) - checks lowercase character 
 * Description: checks lowercase cahracter
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
