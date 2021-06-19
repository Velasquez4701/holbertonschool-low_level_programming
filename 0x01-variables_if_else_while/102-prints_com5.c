#include <stdio.h>

/**
 *main - combinations of two two digits
 *Return: Always 0
 */
int main(void)
{
	int n, m, k, l;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = (k + 1); l <= '9'; l++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!((n == '9' && m == '8') &&
					      (k == '9' && l == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				l = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
