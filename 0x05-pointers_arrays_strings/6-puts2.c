#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: string
 */
void puts2(char *str)
{
	int index = 0;
	int a;

	while (str[index] != '\0')
	{
		index++;
	}

	for (a = 0; a < index; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
