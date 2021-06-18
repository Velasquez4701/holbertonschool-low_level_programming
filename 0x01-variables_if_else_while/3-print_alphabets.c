#include <stdio.h>

/**
 * main - alphabet uppercase
 *
 * Return: 0 Always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n);
	return (0);
}
