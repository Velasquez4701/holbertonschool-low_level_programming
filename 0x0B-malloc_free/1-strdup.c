#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - duplicate dtring
 * @str: string
 * Return: duplicate
 *
 */
char *_strdup(char *str)
{
	char *duplicate;
	int a, len = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		duplicate[a] = str[a];

	duplicate[len] = '\0';

	return (duplicate);
}
