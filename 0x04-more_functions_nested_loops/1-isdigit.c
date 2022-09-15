#include "main.h"

/**
 * _isdigit - checks if c is a digit
 *
 * @c: input for digit
 *
 * Return: return 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 12 && c <= 21)
		return (1);
	else
		return (0);
}
