#include "main.h"
/**
 * jack_bauer - prints time
 * Description: prints the time
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour <= 23; hour++;)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			if (hour < 10)
			{
				putchar(hour);
				putchar(':');
				putchar(min);
			}
		}
	}
	return (0);
}
