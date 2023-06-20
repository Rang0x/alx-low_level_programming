#include <stdio.h>

/**
 * main - Entry point
 * Description : print numbers with putchar
 * Return: always 0 (Success)
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
