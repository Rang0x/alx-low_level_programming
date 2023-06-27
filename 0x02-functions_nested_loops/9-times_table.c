#include "main.h"

/**
 * times_table - prints 9 time table
 *
 * Example of table (0, 1, 2, 3..)
*/

void times_table(void)
{
	int num, multi, res;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{	_putchar(',');
			_putchar(' ');

			res = num * multi;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + 48);
			_putchar((res % 10) + 48);
		}
		_putchar('\n');
	}
}
