#include "unistd.h"
/**
 * _putchar - print char c
 * @c: variable
 * Description: prints c
 * Return: 1 if true
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
