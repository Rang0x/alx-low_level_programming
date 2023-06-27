#include "main.h"

/**
 * _islower - checks if number lowercase or not
 * @c: the character to check
 * Return: (1) for lowercase , (0) for uppercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
