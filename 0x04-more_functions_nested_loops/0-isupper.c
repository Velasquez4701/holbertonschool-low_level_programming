#include "holberton.h"
#include <ctype.h>

/**
 * _isupper - uppercase character
 * @c: character
 * Return: 1 is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
