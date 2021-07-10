#include <stdio.h>

/**
 * main - fuction main
 * Return: Always 0
 */
int main(void)
{
	long int a = 612852475143;
	int i;

	for (i = 2; i < a; i++)
	{
		while (a % i == 0)
		{
			a = a / i;
		}
	}
	printf("%d\n", i);
	return (0);
}
