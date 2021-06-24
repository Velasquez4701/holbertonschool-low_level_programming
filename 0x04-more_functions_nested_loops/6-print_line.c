#include "holberton.h"

/**
 * print_line - print to the line
 * @n: number
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (a > 0)
			_putchar('_');
		else
			_putchar('\n');

	}
	_putchar('\n');
}
