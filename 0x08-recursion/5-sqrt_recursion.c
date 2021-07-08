#include "holberton.h"

/**
 * find_square - find square
 * @x: number
 * @y: sqr of x
 * Return: sqr options
 */
int find_square(int x, int y)
{
	int square = y * y;

	if (square > x)
	{
		return (-1);
	}
	else if (square == x)
	{
		return (y);
	}
	else
	{
		return (find_square(x, y + 1));
	}
}

/**
 * _sqrt_recursion - function of call
 * @n: number
 * Return: find square
 */
int _sqrt_recursion(int n)
{
	return (find_square(n, 1));
}
