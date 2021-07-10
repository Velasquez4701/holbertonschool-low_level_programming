#include "holberton.h"

/**
 * times_table - multiplication table
 *
 */
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = (i * j);

			if (j == 0)
			{
				_putchar('0' + t);
			}
			else if (t <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + t);
			}
			else if (t > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (t / 10));
				_putchar('0' + (t % 10));
			}
		}
		_putchar('\n');
	}
}
