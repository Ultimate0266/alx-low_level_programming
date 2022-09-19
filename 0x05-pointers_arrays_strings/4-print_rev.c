#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: the used string reference pointer
 * Return: Nothing
 */

void print_rev(char *s)
{
	int s = 0;

	while (str[s])
		s++;
	while (s--)
		_putchar(str[s]);
	_putchar('\n')
}
