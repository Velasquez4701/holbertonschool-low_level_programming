#include "holberton.h"

/**
 * print_numbers - from 0 to 9
 *
 */
void print_numbers(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		_putchar('0' + s);
	}
	_putchar('\n');
}
