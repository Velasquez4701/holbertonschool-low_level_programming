#include "holberton.h"
#include <ctype.h>

/**
 * _islower - lowercase character
 * @c: character
 * Return: 1 is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
