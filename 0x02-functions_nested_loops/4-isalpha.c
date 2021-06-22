#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - is a letter
 * @c: letters
 * Return: 1 letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
