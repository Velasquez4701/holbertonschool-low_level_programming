#include "holberton.h"
#include <unistd.h>

/**
 * print_last_digit - last digit of the number
 * @n: number
 * Return: n%10
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
