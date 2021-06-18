#include <stdio.h>

/**
 * main - remove letters in alphabet
 * Return: Always 0
 */
int main(void){
	char ch='a';

	while (ch <= 'z')
	{
		if(ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
