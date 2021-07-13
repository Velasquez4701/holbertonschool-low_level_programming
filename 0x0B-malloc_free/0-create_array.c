#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create arrays of char
 * @size: size of arrray
 * @c: chars
 * Return: arr
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (a < size)
	{
		arr[a] = c;
		a++;
	}
	return (arr);
}
