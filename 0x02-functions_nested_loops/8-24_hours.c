#include "main.h"
/**
 * jack_bauer - prints time
 * Description: prints the time
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int hour= 0;
	int mins = 0;
	int h_r;
	int m_r;

	for (hour = 0; hour <= 23; hour++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			h_r = hour % 10;
			m_r = mins % 10;
			_putchar(hour / 10 + '0');
			_putchar(h_r + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(m_r + '0');
			minutes++;
			_putchar('\n');
		}
		hour++;
		mins = 0;
	}
}
