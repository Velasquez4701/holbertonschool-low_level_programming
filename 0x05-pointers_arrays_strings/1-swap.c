#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integers
 * @b: second integers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
