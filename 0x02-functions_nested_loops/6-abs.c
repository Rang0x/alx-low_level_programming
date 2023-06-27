#include "main.h"

/**
 * _abs - print absolute value of integer
 * @n: the number to print absolute
 * Return: absolute value or zero
*/

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
