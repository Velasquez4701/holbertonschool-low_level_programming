#include "holberton.h"
#include <ctype.h>

/**
 * _isdigit - digit character
 * @c: character
 * Return: 1 is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
