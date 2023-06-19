#include <stdio.h>

/**
 * main - Entry point
 * Description: print lowercase except e,q
 * Return: always 0 (Success)
*/

int main(void)
{
	char chr = ('a');

	while (chr <= 'z')
	{
		if (chr == 'e' || chr == 'q')
			chr++;
			putchar(chr);
			chr++;
	}
	putchar('\n');

	return (0);

}
