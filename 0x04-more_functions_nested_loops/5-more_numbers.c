#include "holberton.h"

/**
 * more_numbers - print 10 times, from 0 to 14
 *
 */

void more_numbers(void)
{
	int s, a;

	for (a = 0; a < 10; a++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s > 9)
			{
				_putchar('0' + (s / 10));
			}
			_putchar('0' + (s % 10));
		}
		_putchar('\n');
	}
}
