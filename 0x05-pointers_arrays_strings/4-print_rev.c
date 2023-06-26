#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse
 * followed by a new line.
 * @s: stringg
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0
	int a;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (a = length; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

