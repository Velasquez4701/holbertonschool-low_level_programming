#include "holberton.h"

/**
 * _memcpy - Copies memory with a constant byte
 * @dest: a pointer to the memory
 * @src: source buffer to copy
 * @n: bytes of memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
