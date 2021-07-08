#include "holberton.h"

/**
 * factorial - factorial ofa given a number
 * @n: number
 * Return: conditions
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
