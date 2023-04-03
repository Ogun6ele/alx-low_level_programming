#include "maini.h"

/**
*times_table - gives the times table
*
*Return: void
*/

void times_table(void)
{
	int n;
	int t;
	int m;

	for (n = 0; n < 10; n++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (t = 1; t < 10; t++)
		{
			m = n * t;
			if (m / 10 == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');
			if (t != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
