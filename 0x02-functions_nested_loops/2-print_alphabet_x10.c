#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in a row, in lower case
 *
 * new line
 */
void print_alphabet_x10(void)
{
	char c;
	int a;

	a = 0;

	while (a < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		a++;
	}
}
