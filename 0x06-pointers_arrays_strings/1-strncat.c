#include "holberton"
#include <string.h>

/**
 * _strncat - concatenates two string
 * @dest: destination string
 * @src: source string
 * @n: bytes
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
