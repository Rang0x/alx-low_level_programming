#include <stdio.h>

/**
 * main - Entry point
 * Description : print numbers with separators
 * Return: always 0 (Success)
*/

int main(void)
{
	int numb = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++
	}
	putchar('\n')

	return (0);
}
