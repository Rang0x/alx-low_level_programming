#include <stdio.h>

/**
 * main - Entry point
 * Description: print upper and lowercase
 * Return: always 0 (Success)
*/

int main(void)
{
	char chr = ('a');

	char Chr = ('A');

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}

	while (Chr <= 'Z')
	{
		putchar(Chr);
		Chr++;
	}
	putchar('\n');

	return (0);

}
