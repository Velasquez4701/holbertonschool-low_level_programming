#include "holberton.h"

/**
 * _print_rev_recursion - print a string reverse
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
}
