#include <stdio.h>

/**
 * main - Entry point
 * Description : print characters from z to a
 * Return: always 0 (Success)
*/

int main(void)
{
	char ltr = 'z';

	while (ltr >= 'a')
	{
		putchar(ltr);
		ltr--;
	}
	putchar('\n');

	return (0);
}
