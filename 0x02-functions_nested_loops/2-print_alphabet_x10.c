#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet lowerscase 10 times
*/

void print_alphabet_x10(void)
{
	int i, chr;

	for (i = 0; i < 10; i++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}
