#include "main.h"

/**
 * _isalpha - checks if character is alpha or not
 * @c: the character to check
 * Return: (1) for alphabet , (0) for otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);

}
