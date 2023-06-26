#include "main.h"

/**
 * main - Entry point
 * Description : prints _putchar using prototype _putchar
 * Return: Always 0 (success)
*/

int main(void)
{
	char wrd[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(wrd[ch]);
	_putchar('\n');

	return (0);
}
