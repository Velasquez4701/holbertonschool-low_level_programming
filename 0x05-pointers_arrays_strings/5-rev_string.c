#include "holberton.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int index = strlen(s);
	int a;

	for (a = 0; a < (index / 2); a++)
	{
		char ch = s[a];

		s[a] = s[index - a - 1];
		s[index - a - 1] = ch;
	}
}
