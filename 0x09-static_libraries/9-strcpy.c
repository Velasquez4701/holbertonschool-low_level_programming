#include "holberton.h"

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index++] = '\0';

	return (dest);
}
