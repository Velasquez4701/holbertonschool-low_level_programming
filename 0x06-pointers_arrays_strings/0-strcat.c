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
	int index = strlen(dest);

	while (*src)
	{
		dest[index] = *src;
		src++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
