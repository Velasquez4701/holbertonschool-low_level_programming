#include "holberton.h"

/**
 * print_alphabet_x10 - print 10 times
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}