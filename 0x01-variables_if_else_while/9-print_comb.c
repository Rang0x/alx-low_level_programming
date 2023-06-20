#include <stdio.h>

/**
 * main - Entry point
 * Description : print numbers with separators
 * Return: always 0 (Success)
*/

int main(void)
{
	int numb = 0;

	while (numb <= 9)
	{
		putchar(numb + 48);

		if (numb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numb++;
	}
	putchar('\n');

	return (0);
}
