#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @str: a pointer to print in reverse
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
