#include <stdio.h>

/**
 * main - print numbers 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
