#include "holberton.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: memory area ro fill
 * @b: constant byte
 * @n: bytes of memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
