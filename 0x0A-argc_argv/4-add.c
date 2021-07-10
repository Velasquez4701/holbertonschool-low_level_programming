#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point for program
 *
 * @argc: argument
 * @argv: pointer
 *
 * Return: sum
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i])) /* non numeric */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}