#include "holberton.h"

/**
 * _memcpy - copies bytes from the memory
 * @dest: pointer to the memory
 * @src: source buffer to copy
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
