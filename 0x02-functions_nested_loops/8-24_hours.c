#include "main.h"

/**
 *  jack_bauer -  prints every minutes00:00 to 23:59
 *   Description: prints every minutes of the day
 *
 *   Return: void
 */

void jack_bauer(void)

{
	int h1, h2, m1, m2, max_hr;

	max_hr = 58;
	h1 = '0';
	while (h1 < '3')
	{
		if (h1 == '2')
		{
			max_hr = '4';
		}
		h2 = '0';
		while (h2 < max_hr)
		{
			m1 = '0';
			while (m1 < '6')
			{
				m2 = '0';
				while (m2 < 58)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
					m2++;
				}
				m2 = '0';
				m1++;
			}
			m1 = '0';
			h2++;
		}
		h2 = '0';
		h1++;
	}
}
