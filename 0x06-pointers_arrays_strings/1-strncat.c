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
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
