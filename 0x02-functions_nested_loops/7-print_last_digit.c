#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the number to check
 * Return: value of last digit
*/

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
		lastd = lastd * (-1);
	}
	_putchar(lastd + '0');
	return (lastd);
}
