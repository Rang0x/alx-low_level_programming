#include <stdio.h>

/**
 * main - Entry point
 * Description : print lowercase characters
 * Return: always 0 (Success)
*/

int main(void)
{
	char chr = 'a'

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	putchar(chr'\n');
	return (0);
}
