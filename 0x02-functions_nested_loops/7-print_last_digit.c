#include "holberton.h"
#include <unistd.h>

/**
 * print_last_digit - last digit of the number
 * @n: number
 * Return: n%10
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
		a *= -1;

	_putchar(a + '0');

	return (a);
}
