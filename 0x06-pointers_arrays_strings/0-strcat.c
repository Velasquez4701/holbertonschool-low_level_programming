#include "holberton.h"
#include <string.h>

/**
 * _strcat - concatenates two string
 * @dest: destination string
 * @src: source string
 *
 * Return: string dest
 */
char *_strcat(char *dest, char *src)
{
	int l = strlen(dest);
	int i = l;

	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
