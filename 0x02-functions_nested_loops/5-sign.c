#include "holberton.h"

/**
 * print_sign - prints the sign
 * @n: character
 * Return: 1 positive, -1 negative, 0 is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
