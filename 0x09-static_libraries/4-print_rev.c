#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	for (index = index - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
