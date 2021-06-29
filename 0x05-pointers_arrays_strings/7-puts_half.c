#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: half of a string
 */
Void puts_half(char *str)
{
	int index = 0;
	int a;

	while (str[index] != '\0')
	{
		index++;
	}

	if (index % 2 == 1)
	{
		a = (index - 1) / 2;
		a++;
	}
	else
	{
		a = index / 2;
	}

	for (a ; a < index; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
