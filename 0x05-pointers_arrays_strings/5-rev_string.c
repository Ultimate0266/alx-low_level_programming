#include "main.h"

/**
 * rev_string - function that reverse a string
 *
 * @s: pointer string  is reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i--;
	_putchar(s[i]);
}
