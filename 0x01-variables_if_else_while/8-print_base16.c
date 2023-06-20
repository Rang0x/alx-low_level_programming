#include <stdio.h>

/**
 * main - Entry point
 * Description : print hexadecimal numbers
 * Return: always 0 (Success)
*/

int main(void)
{
	int number = 48;

	while (number <= 102)
	{
		putchar(number);

		/* after reaching 9 jump to 96 >> check ASCII*/
		if (number == 57)
			number += 39;
		number++;
	}
	putchar('\n');

	return (0);
}
